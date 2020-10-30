
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int funkcija(){
	int katete1;
	int katete2;
	printf("Ievadiet 1.katetes izmērus: \n");
	scanf("%d", &katete1);
	printf("Ievadiet 2.katetes izmērus: \n");
	scanf("%d", &katete2);
	float hipotenuza = sqrt((katete1 * katete1) + (katete2 * katete2));
	return hipotenuza;
}

int main(){
	float cipars = funkcija();
	printf("Hipotenūzas garums: %f\n", cipars);
	return 0;
}
