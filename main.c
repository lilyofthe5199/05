#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int input;

	printf("���� �ϳ��� �Է��Ͻÿ� :");
	scanf("%i",&input);

	if (input < 0)
		input = input*(-1);

	printf("���밪�� %i �Դϴ�.\n", input);
	
	return 0;
}
