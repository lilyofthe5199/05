#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int input;
	int trial=0;
	int answer = 59;
	
	do
	{	printf("Guess a number :");
		scanf("%i", &input);
		if(answer > input)
			printf("low!\n");
		else if(input>answer)
				printf("high!\n");
		trial++;
	}
	
	while (input != answer); // input�� answer�� �ٸ� ���� ��� ����
	
	printf("Congratulation! trials: %i\n", trial);

	return 0;
}
