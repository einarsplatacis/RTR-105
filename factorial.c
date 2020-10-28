
#include <stdio.h>
#include <stdlib.h>


int n = 1;
long long faktorials = 1;
int izvele;
int tips;

int while_char(){
	char skaitlis;
	printf("Ievadiet skaitli: \n");
	scanf("%c", &skaitlis);
	if(skaitlis<0){
		printf("Neeksistē.\n");
	}else{
		while(n < skaitlis + 1){
			faktorials = faktorials * n;
			n++;
		}
	}
	printf("Rezultāts ir: %lld\n", faktorials);
	return 0;
}

int while_int(){
        int skaitlis;
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
	return 0;
}

int while_long(){
        long long skaitlis;
        printf("Ievadiet skaitli: \n");
        scanf("%lld", &skaitlis);
        if(skaitlis<0){
                printf("Neeksistē.\n");
        }else{
                while(n < skaitlis + 1){
                        faktorials = faktorials * n;
                        n++;
                }
        }
        printf("Rezultāts ir: %lld\n", faktorials);
	return 0;
}

int for_char(){
	char skaitlis;
        printf("Ievadiet skaitli: \n");
        scanf("%c", &skaitlis);
        if(skaitlis<0){
                printf("Neeksistē.\n");
        }else{
                for(n = 1;n < skaitlis + 1;n++){
                        faktorials = faktorials * n;
                }
        }
        printf("Rezultāts ir: %lld\n", faktorials);
	return 0;
}

int for_int(){
	int skaitlis;
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
	return 0;
}

int for_long(){
	long long skaitlis;
        printf("Ievadiet skaitli: \n");
        scanf("%lld", &skaitlis);
        if(skaitlis<0){
                printf("Neeksistē.\n");
        }else{
                for(n = 1;n < skaitlis + 1;n++){
                        faktorials = faktorials * n;
                }
        }
        printf("Rezultāts ir: %lld\n", faktorials);
	return 0;
}

int main(){
	printf("Izvēlaties funkciju: 0(while) vai 1(for)? \n");
	scanf("%d", &izvele);
	switch(izvele){
		case 0:
			printf("Kādu datu tips jūs gribat: 0(char), 1(int), 2(long long int)?\n");
			scanf("%d", &tips);
			switch(tips){
				case 0:
					while_char();
					break;
				case 1:
					while_int();
					break;
				case 2:
					while_long();
					break;
				default :
					printf("Invalid type. \n");
			}
			break;
		case 1:
			printf("Kādu datu tipu jūs gribat: 0(char), 1(int), 2(long long int)?\n");
			scanf("%d", &tips);
			switch(tips){
				case 0:
					for_char();
					break;
				case 1:
					for_int();
					break;
				case 2:
					for_long();
					break;
				default :
					printf("Invalid type. \n");
			}
			break;
		default:
			printf("Nepareiza izvēle. \n");
	}
	return 0;
}
