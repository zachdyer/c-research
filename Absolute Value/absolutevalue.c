#include<stdio.h>
#include <stdlib.h> 

main(int argc, char * argv[]){
	printf("Enter a number to find out what its absolute value is:");
	char numberStr[8];
	int numberInt = strtol(gets(numberStr),NULL,0);
	printf("The absolute value of %d is %d",numberInt,abs(numberInt));
}
