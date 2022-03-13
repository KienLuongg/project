#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int YearWithUs;
	int bizDone;
	printf("year =");
	scanf("%d", &YearWithUs);
	printf("bizDone =");
	scanf("%d", &bizDone);
	if(YearWithUs >= 10 && bizDone >=5000000){
		printf("Classified as an MSV");
	} else{
		printf("A little more effort required!");
	}
	return 0;
}
