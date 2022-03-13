#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	printf("Enter a num :");
	scanf("%d", &num);
	if (num % 2 ==0){
	printf("even number");
	} else{
		printf("odd number");
	}
	return 0;
}
