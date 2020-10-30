#include <stdio.h>
#include <stdlib.h>


void funkcija(int svars){
	double rezultats;
	if(svars > 0){
		rezultats = 0.450 * svars;
		printf("Ievadītais svars mārciņās ir: %f\n", rezultats);
	}else{
		printf("Kļūda. Svars ir pozitīvs.");
	}
}

int main(){
	int svars;
	printf("Lūdzu ievadiet svaru kilogramos: \n");
	scanf("%d", &svars);
	funkcija(svars);
}
