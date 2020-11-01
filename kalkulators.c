
#include <stdio.h>
#include <stdlib.h>

float cipars;
float cipars2;
char operators;
float rezultats;
char izvele;
float result;

int kalkulators(float cipars, float cipars2, char operators){
	if(operators == '+'){
		rezultats = cipars + cipars2;
	}else if(operators == '-'){
		rezultats = cipars - cipars2;
	}else if(operators == '*'){
		rezultats = cipars * cipars2;
	}else if(operators == '/'){
		rezultats = cipars / cipars2;
	}else{
		printf("Kaut kas nesagāja. \n");
	}
	return rezultats;
}

int main(){
        printf("Lūdzu, ievadiet ciparu: \n");
        scanf("%f", &cipars);
        printf("Lūdzu, ievadiet ciparu: \n");
        scanf("%f", &cipars2);
        printf("Kāda operācija? \n");
        scanf("%s", &operators);
        result = kalkulators(cipars, cipars2, operators);
        printf("Rezultāts ir: %f\n", result);
        return 0;
}
