#include <math.h>
#include <stdio.h>

int main(){
	
	float sal;
	
	printf("digite seu salario: ");
	scanf("%f", sal);
	
	if ((sal <= 2000)){
		printf("nadaaa");
	}
	else if ((sal >= 2001 && sal <= 4000)){
		printf("10 de imposto");
	}
	else {
		printf("20 de imposto");
	}
	}
