#include<stdio.h>
#include <stdlib.h> 

void prime(int max){
	int i;
	for(i = 1; i <= max; i++){
		int j;
		int divisors = 0;
		for(j = 1; j <= i; j++){
		
			if(i % j == 0){
				divisors++;
			}
		}
		if(divisors == 2){
			printf("%d is prime\n",i);
		}
	}
}

void main(int argc, char * argv[]) {
	//A prime number is a natural number divisible by 2 natural numbers.
	
	if(argc < 2){
		printf("Find the prime numbers between 1 and any number\n");
		printf("Enter the maximum number: \n");
		char maxChar[16];
		gets(maxChar);
		int max = strtol(maxChar,NULL,0);
		prime(max);
		
	} else {
		int max = strtol(argv[1],NULL,0);
		prime(max);
		printf("%s",argv[1]);
	}
}	