#include <stdio.h>

int main(){
	
	int num1, num2, num3, comp;
	// 0 = falso 1= verdadeiro
	num1 = 30;
	num2 = 15;
	num3= 25;
	//operadores logicos &&, 
	
	//E:
	comp = (num1 >= num2) && (num2 > num3);
	printf("resultado: %d \n", comp);
	
	//OU
	comp = (num1 == num2) || (num2 <= num3);
	printf("resultado: %d \n", comp);
	
	
	
	printf("1 � igual a verdadeiro e 0 � igual a falso")
	return 0;
}
