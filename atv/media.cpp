#include <math.h>
#include <stdio.h>

int main(){
	/*A nota final de um estudante é calculada a partir de três notas atribuídas
respectivamente a um trabalho de laboratório, a uma avaliação semestral e a um exame
final. A média das três notas mencionadas anteriormente obedece aos pesos a seguir*/

	float nota, lab, ats, exf;
	
	printf("Lab: ");
	scanf("%f", &lab);
	
	printf("ativitidade: ");
	scanf("%f", &ats);
	
	printf("exame: ");
	scanf("%f", &exf);
	
	nota =  ((lab * 0.2) + (ats * 0.3) + (exf * 0.5));
	
	printf("sua nota foi %f", &nota);
}
