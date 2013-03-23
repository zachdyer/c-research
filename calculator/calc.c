#include<iostream>
using namespace std;

int main(){
        
        int num, den, common; 
        float dec;
        
        cout << "Enter a decimal" << endl;
        
        cin >> dec;
        
        num = dec * 100;
        
        den = 100;
        
        for(int i = 1; i <= num; i++){
                if(num % i == 0 && den % i == 0){
                        common = i;
                }
        }
        
        num = num / common;
        den = den / common;
        
        
        cout << dec << " is equivilant to " << num << "/" << den << endl;
        
        
        return 0;
}