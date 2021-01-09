#include <stdio.h>
#include <stdlib.h>

void kartosana();
void swap();
void printArray();

int main(){
	int skaitlis, i, j;
	int rinda[6];
	for(skaitlis=0;skaitlis<6;skaitlis++){
		printf("Ludzu ievadiet %d.skaitli:\n",skaitlis);
		scanf("%d",&rinda[skaitlis]);
	}
	int n = sizeof(rinda)/sizeof(rinda[0]);
	kartosana(rinda, n);
	printf("Sorted array: \n");
	printArray(rinda, n);
	float videjais = (rinda[0]+rinda[1]+rinda[2]+rinda[3]+rinda[4]+rinda[5])/6;
	float mediana = (rinda[3]+rinda[4])/2;
	int moda;
	for(i=0;i<6;i++){
		for(j=0;j<6-i;j++){
			if(rinda[j]==rinda[j+1]){
				moda = rinda[j];
			}
		}
	}
	printf("Rindas mazakaa vertiba ir: %d\n",rinda[0]);
	printf("Rindas lielaakaa vertiba ir: %d\n",rinda[5]);
	printf("Videja vertiba ir: %f\n",videjais);
	printf("Medianas vertiba ir: %f\n",mediana);
	printf("Modas vertiba ir: %d\n",moda);
	return 0;
}

void kartosana(int rinda[], int n){
	int i, j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(rinda[j]>rinda[j+1]){
				int temp = rinda[j];
				rinda[j] = rinda[j+1];
				rinda[j+1] = temp;
			}
		}
	}
}

void printArray(int rinda[], int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d\n", rinda[i]);
	}
}


