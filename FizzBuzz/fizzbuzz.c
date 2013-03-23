#include<stdio.h>
#include <stdlib.h>
#include <string.h>

void fizzbuzz(){
	int i;
	for(i = 0;i < 100; i++){
		if(i % 3 == 0 && i % 5 == 0){
			printf("%s\n","FizzBuzz");
		} else if(i % 3 == 0){
			printf("%s\n","Fizz");
		} else if(i % 5 == 0){
			printf("%s\n","Buzz");
		} else {
			printf("%d\n",i);
		}
	}
}

void count(int min, int max){
	int i;
	for(i = min;i <= max;i++){
		printf("%d\n",i);
	}
}

int main(int argc, char * argv[]) {
	if(argc < 2){
		fizzbuzz();
	} else{
		char * arg = argv[1];
		if(!strcmp(arg,"count")){
			int min = strtol(argv[2],NULL,10);
			int max = strtol(argv[3],NULL,10);
			count(min,max);
		}
	}
	return 0;
}

