#include<iostream>
using namespace std;

int main(){
        
        int num, den, common; 
        float dec;
		bool run = true;
		string answer;  
		
		cout << "=== Decimal to Fraction Converter by zachdyer ===\n" << endl;
        
		while(run){
			cout << "Enter a decimal" << endl;
			
			cin >> dec;
			
			num = dec * 100;
			
			den = 100;
			
			// Finding the greatest common factor
			for(int i = 1; i <= num; i++){
					if(num % i == 0 && den % i == 0){
							common = i;
					}
			}
			
			// Dividing numerator and denomenator by greatest common factor
			num = num / common;
			den = den / common;
			
			// Outputting outcome to console
			cout << dec << " is equivilant to " << num << "/" << den << endl;
			
			cout << "Would you like to convert another decimal(y/n)?" << endl;
			cin >> answer;
			if(answer == "n" || answer == "no"){
				run = false;
			}
		}
        
        
        return 0;
}