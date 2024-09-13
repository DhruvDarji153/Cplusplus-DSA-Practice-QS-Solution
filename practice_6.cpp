// Figure out how to find if a number is power of 2 using loop
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter a Number : ";
//     cin >> n;
//     int i = n;
//     if(i > 0){
//         while( i % 2 == 0){
//           i = i / 2;
//         }
        
//     if( i == 1){
//             cout << "Power of 2 " ;
//         }
//         else
//         {
//             cout << "Not Power of 2 ";
//         }
//         }
//         else{
//            cout << "Valid Number Danger";
//         }
// return 0;
// }

// Practice Qs - 1 Figure out how to find if a number is power of 2 whithout any loop

#include<iostream>
using namespace std;

int powerOfTwo(int num){
    bool k;
    k = num && !(num & num - 1);
    if(k == true){
        cout << "Number is power of Two" << endl;
    }
    else{
        cout << "Number is not power of Two" << endl;
    }
}

int main(){
    int n;
    cout << "Enter a Number : ";
    cin >> n;
     powerOfTwo(n);
    return 0;
}

// Practice Qs : 3 : WAF to reverse an Integer n. 
