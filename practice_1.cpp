// Practice QS. write code for addition of two numbers.
#include<iostream>
using namespace std;

int main(){
    
    int a,b;
    cout << "Number 1 :";
    cin >> a;
    cout << "\nNumber 2 :" ;
    cin >> b;
    int sum = a + b;
    int sub = a - b;
    int mul = a * b;
    float div = a / b;
    cout << "Sum of " << a << "+" << b <<" is " << sum <<endl ;
    cout << "Sub of " << a << "-" << b <<" is " << sub <<endl ;
    cout << "Mul of " << a << "*" << b <<" is " << mul <<endl ;
    cout << "Div of " << a << "/" << b <<" is " << div <<endl ;
    return 0;
}