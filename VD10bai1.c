#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int exp;
	char grade;
	printf("enter grade=");
	scanf("%c", &grade);
	printf("enter exp=");
	scanf("%d", &exp);
	if (grade == 'E'){
		if(exp == 2){
			printf("salary = 2000");
		}if (exp == 3){
			printf("salary = 3000");
	
		}
	}if (grade == 'M'){
		if (exp == 2){
			printf("salary = 3000");
			
		}if(exp == 3){
			printf("salary = 4000");
			
		}
	}
	return 0;
}
