#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float a, b, c, x, y, delta_x, funkca, funkcb, funkcx, rezultats;
	int k=0;
	printf("Cien.lietotāj, ievadiet a vērtību:\n");
	scanf("%f",&a);
	printf("Cien.lietotāj, ievadiet b vērtību:\n");
	scanf("%f",&b);
	printf("Cien.lietotāj, ievadiet c vērtību:\n");
	scanf("%f",&c);
	printf("Cien.lietotāj, ievadiet precizitātes vērtību:\n");
	scanf("%f",&delta_x);
	funkca = cos(a/2);
	funkcb = cos(b/2);
	if(funkca*funkcb>0){
		printf("Intervālā [%.2f;%.2f] cos(x/2) funkcijai sakņu nav vai arī tajā ir pāra skaits sakņu.",a,b);
		return 1;
	}
	printf("		cos(%7.3f/2)=%7.3f\t\t\t\t",a,cos(a/2));
	printf("cos(%7.3f/2)=%7.3f\n",b,cos(b/2));
	while((b-a)>delta_x){
		k++;
		x = (a+b)/2;
		if(funkca*cos(x/2)>0){
			a = x;
		}else{
			b = x;
		}
	printf("%2d. iterācija: cos(%7.3f/2)=%7.3f\t",k,a,cos(a/2));
	printf("cos(%7.3f/2)=%7.3f\t",x,cos(x/2));
	printf("cos(%7.3f/2)=%7.3f\n",b,cos(b/2));
	}
	printf("Sakne atrodas pie x=%.3f, jo cos(x/2) ir %.3f\n",x,cos(x/2));
	rezultats = 2*acos(c);
	y = cos(rezultats/2);
	printf("Ievadītās c argumenta vērtība: %.3f\n",rezultats);
	printf("Iegūtā argumenta aptuvenā funkcijas vērtība: %.3f\n",y);
	return 0;
}
