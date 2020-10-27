
#include <stdio.h>
#include <stdlib.h>

int skaitlis;
int n = 1;
long long faktorials = 1;
int izvele;

int while_(){
	printf("Ievadiet skaitli: \n");
	scanf("%d", &skaitlis);
	if(skaitlis<0){
		printf("Neeksistē.\n");
	}else{
		while(n < skaitlis + 1){
			faktorials = faktorials * n;
			n++;
		}
	}
	printf("Rezultāts ir: %lld\n", faktorials);
}

int for_(){
        printf("Ievadiet skaitli: \n");
        scanf("%d", &skaitlis);
        if(skaitlis<0){
                printf("Neeksistē.\n");
        }else{
                for(n = 1;n < skaitlis + 1;n++){
                        faktorials = faktorials * n;
                }
        }
        printf("Rezultāts ir: %lld\n", faktorials);
}

int main(){
	printf("Izvēlaties funkciju: 0(while) vai 1(for)? \n");
	scanf("%d", &izvele);
	switch(izvele){
		case 0:
			while_();
			break;
		case 1:
			for_();
			break;
		default :
			printf("Nepareiza atbilde. \n");
	}
}
