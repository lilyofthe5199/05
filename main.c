#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int input;

	printf("정수 하나를 입력하시오 :");
	scanf("%i",&input);

	if (input < 0)
		input = input*(-1);

	printf("절대값은 %i 입니다.\n", input);
	
	return 0;
}
