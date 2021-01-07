#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	double a, b,x,delta_x,y,y0,y1,y2,y3,y4;
	printf("Cien.lietotāj, ievadiet a vērtību:\n");
	scanf("%lf",&a);
	printf("Cien.lietotāj, ievadiet b vērtību:\n");
	scanf("%lf",&b);
	printf("Cien.lietotāj, ievadiet dx vērtību:\n");
	scanf("%lf",&delta_x);
	x = a;
	printf("\tx\tcos''(x/2)\n");
	while(x<b){
		y = cos(x/2);
        	y1 = cos((x+delta_x)/2);
        	y2 = (y1-y)/delta_x;
		//printf("%10.5f\t%10.5f\t\n",x,y2);
		x += delta_x;
		y0 = cos(x/2);
		y1 = cos((x+delta_x)/2);
		y3 = (y1-y0)/delta_x;
		y4 = (y3-y2)/delta_x;
		printf("%10.5f\t%10.5f\t\n",x,y4);
	}
}
