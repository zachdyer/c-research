#include <iostream>
#include <string.h>

enum { max_length = 127};
static char first[max_length];
static char last[max_length];

int main( int argc, char *argv[]) {
	
	printf("What is your first name: ");
	gets(first);
	
	printf("What is your last name: ");
	gets(last);
	printf("Your name is %s %s", first, last);
	
	return 0;
} 