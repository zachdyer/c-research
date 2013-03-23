#include<stdio.h>
#include <stdlib.h>

void main(int argc, char * argv[]){
	if(argc < 2){
		printf("Enter a number to check if it is divible by another number\n");
		char a[256];
		gets(a);
		printf("Enter and number to check if divisible by\n");
		char b[64];
		gets(b);
		if(strtol(a,NULL,10) % strtol(b,NULL,10) == 0){
			printf("%s is divisible by %s\n" ,a ,b);
		} else {
			printf("%s is not divisible by %s\n" ,a ,b);
		}
	} else {
		char * a = argv[1];
		char * b = argv[2];
		if(strtol(a,NULL,10) % strtol(b,NULL,10) == 0){
			printf("%s is divisible by %s", a, b);
		} else {
			printf("%s is not divisible by %s", a, b);
		}
	}
}