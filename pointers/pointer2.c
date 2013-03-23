#include<stdio.h>

int main(int argc, char * argv[]) {
	//puts(argv[0]);
	char name[] = "zach";
	//name = "s";
	char * ptr = name;
	//ptr = name;
	//char * last = "dyer";
	//char last = "dyer";
	//ptr = "dyer";
	int x = 2;
	//int * xPtr = x; A pointer can only point to an address. It cannot point to a value or the compiler will error.
	int * y;
	y = &x;
	int * z = &x;
	*y = 4;
	
	int numbers[] = {1,2,3,4,5};
	
	printf("x address: %d \n",&x);
	printf("x value: %d \n",x);
	printf("y points to x address: %d \n",y);
	printf("*y points to x value: %d \n",*y);
	printf("z points to x value: %d \n", *z);
	printf("name value: %s \n", name);
	printf("&name address: %d \n", &name);
	printf("ptr: %s \n", ptr);
	printf("argv: %d \n", argv);
	printf("&argv[0]: %d \n", &argv[0]);
	printf("argv[0]: %s \n", argv[0]);
	printf("numbers: %d \n", numbers);
	printf("&numbers: %d \n", &numbers);
	printf("numbers[0]: %d \n", numbers[0]);
	
	return 0;
	
}