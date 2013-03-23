#include<stdio.h>
#include <stdlib.h> 

main(int argc, char * argv[]) {
	//A prime number is a natural number divisible by 2 natural numbers.
	printf("Find the prime numbers between 1 and any number\n");
	printf("Enter the maximum number: \n");
	char max[16];
	gets(max);
	int i;
	for(i = 1; i <= strtol(max,NULL,0); i++){
		//printf("%d\n",i);
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