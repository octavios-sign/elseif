#include <stdio.h>
#include <math.h>

//comparação

int main(){
	float num1, num2;
	
	printf("de o primeiro numero: \n");
	scanf("%f", &num1);
	
	printf("de o segundo numero: \n");
	scanf("%f", &num2);
	
	if (num1>num2){
		printf("%f eh maior que %f", num1, num2);
	} else if(num2>num1){
		printf("%f eh menor que %f", num1, num2);
	} else {
		printf("os 2 tem que ser iguais");
	}
}
