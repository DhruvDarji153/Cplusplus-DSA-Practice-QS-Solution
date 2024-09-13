// Practice Qs 1 : WAF to check if a number is prime or not .
// #include<iostream>
// using namespace std;

// int prime(int num){
//     bool isbool = true; 
//     for(int i=2; i<num-1;i++){
//         if(num % i == 0){
//          isbool = false;
//          break;
//         }
//     }
//     return isbool;
// }
// int main(){
//  int n;
//   cout << "Enter Number : ";
//   cin >> n;
//    if(prime(n)){
//     cout << n << " is Prime Number. \n";
//    }
//     else{
//         cout << n << " is Not a Prime Number. \n";
//     }
//     return 0;
// }



// Practice Qs 2 : WAF to print all prime numbers from 1 to N.

// #include<iostream>
// using namespace std;

// int primeNum(int num){
//     bool isbool = true;
//     for(int i=2 ; i<num ; i++){
//             if( num % i == 0){
//             isbool = false;
//             break;
//             }
//         }
//         return isbool;
//     }
// int main(){
//     int n;
//     cout << "Enter a Number : ";
//     cin >> n;
//     primeNum(n); 
//     cout <<"Prime Number are : ";
//     for(int i=2 ; i<=n; i++){
//          if(primeNum(i)){
//             cout << i << " , ";
//          }
//     }
//     return 0;
// }


// Practice Qs 3 : WAF to print nth Fibonacci.

#include<iostream>
using namespace std;

int fibonaci(int num){
    int sum = 1,a=0,k;
    for(int i=0 ; i<num; i++){
     if(i == 0){
        cout << a << ", ";
     }   
     if(i == 1){
        cout << sum << ", ";
     }
     k = a + sum;
     a = sum;
     sum = k;
     cout << sum << ", " ;
    }
    return 0;
}
int main(){
    int n;
    cout << "Enter Number : ";
    cin >> n;
    fibonaci(n);
    return 0;
}