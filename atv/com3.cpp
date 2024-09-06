#include <stdio.h>
#include <math.h>

//comparação de 3

int main(){
	float num1, num2, num3;
	printf("quais sao os numeros?");
	scanf("%f", &num1);
	
	printf("otimo agrora o segundo");
	scanf("%f", &num2);
	
	printf("otimo agrora o ultimo");
	scanf("%f", &num3);
	
		
	if ((num1>num2 && num1>num3)){
		printf("%f eh maior que %f e %f", num1, num2, num3);
	} else if((num2>num1 && num2>num3)){
		printf("%f eh maior que %f e %f", num2, num3, num1);
	} else if((num3>num1 && num3> num2)){
		printf("%f eh maior que %f e %f", num3, num2, num1);
	}
	else {
		printf("sao todos iguais");
	}

}
