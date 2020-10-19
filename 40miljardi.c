

#include <stdio.h>
#include <stdlib.h>

long int cipars1;
long int cipars2;
long long int rezultats; 

int main(){
	printf("Ievadiet ciparu: \n");
	scanf("%ld", &cipars1);
	printf("Ievadiet ciparu: \n");
	scanf("%ld", &cipars2);
	rezultats = cipars1 * cipars2;
	printf("Rezultāts ir: %lld\n", rezultats);
	return 0;
}
