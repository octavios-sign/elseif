#include <math.h>
#include <stdio.h>
//numero primo

int main(){
	int num;
	
	printf("qual eh o numero? ");
	scanf("%i", &num);
	
	if ((num /3 && num /2 && num /5 )){
		printf("nao eh primo");
	}
	else {
			printf("eh primo");
	}
	
}



