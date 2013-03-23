#include <stdio.h>
#include <string.h>

enum { max_length = 127};
static char first[max_length];
static char last[max_length];

int main() {
	
	/*
	int a = 512;
	int len = strlen("string");
	char string[6] = "string";
	char b[1] = "b";
	printf("%d\n", len);
	printf("%d\n",sizeof(string));
	printf("%d\n",sizeof(a));
	*/
	
	//printf("%d",strlen("hello, world"));
	
	//char string[] = "String nl";
	//string[3] = 'p';
	//printf(string);
	//string test = "test";
	
	printf("What is your first name: ");
	fgets(first, max_length, stdin);
	
	printf("What is your last name: ");
	fgets(last, max_length, stdin);
	printf("Your name is %s %s", first, last);
	
	return 0;
} 