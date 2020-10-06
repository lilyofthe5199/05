#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num=0;
	char c;
	
	printf("input a string:");

	while ( (c=getchar()) != '\n' ) // c에 문자 하나 하나 넣음. 문자열이 끝날때 까지 반복 
	// getchar가 scanf역할
	// (c = getchar() )가  '\n'와 다르면 반복 
	 {
	 	if(c >= '0' && c <= '9')
	 	{
	 		num++; // num이 1씩 증가 
		 }
	 }
	 
		
	printf("the number of digits is %i\n", num);
	
	return 0;
}
