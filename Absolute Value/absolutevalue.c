#include<stdio.h>

main(int argc, char * argv[]){
	//puts(�Hello world�); 
	char ben[] = "Ben";
	char zach[] = {'Z','a','c','h','\0'};
	//char arr[] = {'c','o','d','e','\0'};

	printf("Hello, %s \n", ben);
	printf("Hello, %s \n", zach);
	printf("Hello, %c \n", zach[0]);
	printf("Hello World!");
	printf("Hello, %s \n", ben && zach);
}
