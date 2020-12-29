#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	long double x,a,S,y;
	int k=0;
	printf("Cien.lietotāj, lūdzu, ievadi vērtību:\n");
	scanf("%Lf\n",&x);
	x = x/2;
	y=cos(x);
	//printf("%.3f\n",y);
	printf("cos(x/2) aprēķināšana:\n");
        printf("Ievadi argumentu x/2: %.3Lf\n",x);
        printf("cos(%.3Lf)=%.3Lf\n",x,y);

	a = pow(-1,k)*pow(x,2*k)/(1*pow(2,2*k));
	S = a;

	printf("a0 = %.5Lf\t S0 = %.5Lf\n",a,S);
	for(k=1;k<500;k++){
		a = a * (-1)*x*x/((2*k)*(2*k-1));
		S = S + a;
		//printf("%.100f\t%8.100f\t%8.10f\n",x,a,S);
	}
	printf("a499 = %.300Lf\n S499 = %.300Lf\n",a,S);
	k = 500;
	a = pow(-1,k)*pow(x,2*k)/(1*pow(2,2*k));
	S = S + a;
	printf("a500 = %.300Lf\n S500 = %.10Lf\n",a,S);
	printf("\t\t500\n");
        printf("\t      ______\n");
        printf("\t      \\           k    2*k\n");
        printf("\t       \\       (-1) * x\n");
        printf("cos(%.3Lf/2) =     > __________________________\n",x);
        printf("\t       /               2*k\n");
        printf("\t      /_____   (2*k)!*2\n");
        printf("\t        k=0\n");
	printf("\n");
	printf("                                2\n");
	printf("                        (-1) * x\n");
	printf("Rekurences reizinātājs: _______________\n");
	printf("\n");
	printf("                         (2*k)*(2*k-1)\n");
}
