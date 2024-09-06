#include <stdio.h>
#include <math.h>

//bissexto

int main(){
	int ano;
	printf("qual eh o ano? \n");
	scanf("%i", &ano);
	
	if (ano %4){
		printf("nah");
	}
	else {
		printf("eh bissexto");
	}
	
	
	
	
}
