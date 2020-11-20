#include <iostream>
using namespace std;

int main(){
	float temp;
	cout << "Insert temperature in Celsius:" << endl;
	cin >> temp;
	cout << temp << " degrees Celsius is " << (temp+32) << " degrees Fahrenheit.";
}
