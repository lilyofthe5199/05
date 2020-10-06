#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int input;
	int i;
	int sum=0;


	printf("input a number:");
	scanf("%i", &input);

	for (i=1; i<=input; i++) // 초기식, 조건식, 증감식
		sum += i;

	printf("The result is %i\n", sum);
	
	return 0;
}
