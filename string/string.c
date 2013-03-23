#include <stdio.h>
#include <string.h>

int main() {
	
	char string[] = "string";
	
	printf("The length of the char array is %d", sizeof(string));
	
	for( int i = 0; i < sizeof(string); ++i){
		printf("%c",string[i]);0
	}
	
	return 0;
}
