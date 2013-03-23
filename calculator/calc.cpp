#include<iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int help(char bin[]){
	cout << "\n=== Simple Console Calculator by hwot dwog. Version 0.1 ===" << endl;
	cout << "USAGE:" << endl;
	cout << bin << " [number] [operator] [number]" << endl;
	return 0;
} 

int main(int argc, char *argv[]){
    
	if(argc != 4){
		help(argv[0]);
	}
	else {
		int a = strtoul(argv[1],NULL,0);
		string op = argv[2];
		int b = strtoul(argv[3],NULL,0);
		int answer = 0;
		
		if(op == "+"){
			answer = a + b;
		}
		else if(op == "-"){
			answer = a - b;
		}
		else if(op == "*"){
			answer = a * b;
		}
		else if(op == "/"){
			answer = a / b;
		}
		else{
			cout << "Not a valid operator." << endl;
			return 0;
		}
		
		cout << a << " " << op << " " << b << " = " << answer << endl;
		//cout << op << endl;
    }
	
    return 0;
}