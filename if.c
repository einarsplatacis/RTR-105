
#include <stdio.h>
#include <stdlib.h>

int a;
int b;
int c;
int izvele;

int dilstosais(){
	if(a > b && a > c && b > c){
		printf(" 1.cipars ir: %d\n 2.cipars ir: %d\n 3.cipars ir: %d\n", a, b, c);
	}else if(a > b && a > c && c > b){
		printf(" 1.cipars ir: %d\n 2.cipars ir: %d\n 3.cipars ir: %d\n", a, c, b);
	}else if(b > a && b > c && a > c){
		printf(" 1.cipars ir: %d\n 2.cipars ir: %d\n 3.cipars ir: %d\n", b, a, c);
	}else if(b > a && b > c && c > a){
                printf(" 1.cipars ir: %d\n 2.cipars ir: %d\n 3.cipars ir: %d\n", b, c, a);
	}else if(c > a && c > b && a > b){
		printf(" 1.cipars ir: %d\n 2.cipars ir: %d\n 3.cipars ir: %d\n", c, a, b);
	}else if(c > a && c > b && b > a){
		printf(" 1.cipars ir: %d\n 2.cipars ir: %d\n 3.cipars ir: %d\n", c, b, a);
	}else{
		printf(" Kļūme.\n");
	}
}


int augosais(){
	if(a < b && a < c && b < c){
		printf(" 1.cipars ir: %d\n 2.cipars ir: %d\n 3.cipars ir: %d\n", a, b, c);
	}else if(a < b && a < c && c < b){
		printf(" 1.cipars ir: %d\n 2.cipars ir: %d\n 3.cipars ir: %d\n", a, b, c);
	}else if(b < a && b < c && a < c){
		printf(" 1.cipars ir: %d\n 2.cipars ir: %d\n 3.cipars ir: %d\n", a, b, c);
	}else if(b < a && b < c && c < a){
		printf(" 1.cipars ir: %d\n 2.cipars ir: %d\n 3.cipars ir: %d\n", b, c, a);
	}else if(c < a && c < b && a < b){
		printf(" 1.cipars ir: %d\n 2.cipars ir: %d\n 3.cipars ir: %d\n", c, a, b);
	}else if(c < a && c < b && b < a){
                printf(" 1.cipars ir: %d\n 2.cipars ir: %d\n 3.cipars ir: %d\n", c, b, a);
	}else{
		printf("Kļūda.\n");
	}
}


int main(){
        printf("Kāda secība: 0(augoša) vai 1(dilstoša)?\n");
        scanf("%d", &izvele);
        switch(izvele){
                case 0:
			printf("Lūdzu ievadiet ciparus: \n");
        		scanf("%d", &a);
        		scanf("%d", &b);
        		scanf("%d", &c);
                        augosais();
                        break;
                case 1:
			printf("Lūdzu ievadiet ciparus: \n");
        		scanf("%d", &a);
        		scanf("%d", &b);
        		scanf("%d", &c);
                        dilstosais();
                        break;
                default:
                        printf("Kļūda.\n");

        }
}
