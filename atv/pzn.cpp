#include <stdio.h>
#include <math.h>

//positivo, negativo ou zero

int main(){
	float num;
	
	printf("qual eh o numero? ");
	scanf("%f", &num);
	
	if (num > 0 ){
	printf("positivo!");
	}
	
	else if (num = 0) {
	printf("igual a zero!");
	}
	
	else {
	printf("negativo!");
	}
	
	return 0;
}
