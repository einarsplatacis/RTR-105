#include <stdio.h>
#include <stdlib.h>

void funkcija(){
	int cipars = 2;
	int pakape = 2;
	int i;
	int rezultats = 1;
	for(i = 0; i < pakape; i++){
		rezultats = rezultats * cipars;
	}
	printf("Rezultāts ir %d\n", rezultats);
}

int main(){
	funkcija();
}
