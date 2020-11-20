#include <iostream>
using namespace std;

int a,b,n;
int main(){
    
	cout << "Type a positive integer a" << endl;
	cin >> a;
	cout << "Type a positive integer b(greater than a)" << endl;
	cin >> b;
	cout << "Type a positive integer n" << endl;
	cin >> n;
	string numbers[]{"even","odd","one","two","three","four","five","six","seven","eight","nine"};
	for(n;n>=a&&n<=b;n++){
		if(n>=1&&n<=9){
			cout << numbers[n+2];
		}else if(n>9&&even=true){
			cout << "even";
		}else if(n>9&&even=false){
			cout << "odd";
		}
	}
	
	//function that checks whether n is even or odd
	float check(bool even){
		if(n=/*sth..*/){
			even=true
		}else even=false
	}
	
	
	
	  
	
