#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float a,b,eps,h,integr1=0,integr2;
int izvele,k,n=2;

int taisnsturis();
int trapece();

int main(){
	printf("Cien.lietotaj, ievadiet a:\n");
	scanf("%f",&a);
	printf("Cien.lietotaj, ievadiet b:\n");
	scanf("%f",&b);
	printf("Cien.lietotaj, ievadiet precizitati:\n");
	scanf("%f",&eps);
	printf("Kadu algoritmu Jus izvelaties? 1-taisnsturu; 2-trapecu\n");
	scanf("%d",&izvele);
	switch(izvele){
		case 1:
			taisnsturis();
			break;
		case 2:
			trapece();
			break;
	}
}



int taisnsturis(){
	integr2=(b-a)*(cos(((a+b)/n)/2));
	while(fabs(integr2-integr1)>eps){
		n*=2;
		h=(b-a)/n;
		integr1=integr2;
		integr2=0;
		for(k=0;k<n;k++){
			integr2+=h*cos((a+(k+0.5)*h)/2);
		}
	}
	printf("Integrala vertiba: %.5f\n",integr2);
}

int trapece(){
	float c=a+eps,s1,S=0;
	while(c<b+eps){
		s1 =(c-a)*((cos(a/2)+cos(c/2))/2);
		S+=s1;
		a=a+eps;
		c=c+eps;
 	}
	printf("Integrala vertiba: %.5f\n",S);
}
