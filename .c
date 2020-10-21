
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

long int cipars[30];
int i;
long int rezultats;

int main(){
	printf("Lūdzu ievadiet ciparu: \n");
	scanf("%ld", &cipars[i]);
	while(i>0){
		rezultats = cipars[i] * pow(2, i);
		i--;
	}
	printf("Rezultāts ir %ld\n", rezultats);
}
