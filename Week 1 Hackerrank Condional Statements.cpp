#include <string>
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    string numbers[] = {"Greater than 9","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if(n>9){
        cout << numbers[0] << endl;
    }
    else {
        cout << numbers[n+1] << endl;
    }
    return 0;
}
