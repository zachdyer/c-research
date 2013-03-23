#include <iostream>
#include <string.h>
using namespace std;

int main() {
	
	//char string[] = "string"; //This is a C string
	string cppstring = "This is a \"C++\" string.";
	cppstring[cppstring.length()] = '!';
	
	
	cout << cppstring << endl;
	//cout << "The length of the char array is: " << sizeof(string) << endl;
	
	
	for( int i = 0; i < cppstring.length(); i++){
		printf("%02d: %c\n", i, cppstring[i]);
	}
	
	
	return 0;
}
