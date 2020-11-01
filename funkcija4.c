#include <stdio.h>
#include <stdlib.h>

float skaitlis1;
float skaitlis2;
char simbols;

int funkcija(float skaitlis1, float skaitlis2, char simbols){
	float rezultats;
	if(simbols = '+'){
		rezultats = skaitlis1 + skaitlis2;
	}
	if(simbols = '-'){
		rezultats = skaitlis1 - skaitlis2;
	}
	if(simbols = '*'){
		rezultats = skaitlis1 * skaitlis2;
	}
	if(simbols = '/'){
		rezultats = skaitlis1 / skaitlis2;
	}else{
		printf("Kļūda. Nederīgs operātors.\n");
	}
	return rezultats;
}

int main(){
	printf("Lūdzu ievadiet 1.skaitli: \n");
	scanf("%f", &skaitlis1);
	printf("Lūdzu ievadiet 2.skaitli: \n");
	scanf("%f", &skaitlis2);
	printf("Kādu operāciju jūs izvēlaties?\n");
	scanf("%s", &simbols);
	float result = funkcija(skaitlis1, skaitlis2, simbols);
	printf("Rezultāts ir %f\n", result);
}
