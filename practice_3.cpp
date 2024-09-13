// Practice Qs-1 : Print given Pattern
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter Number : ";
    cin >> n;
    for(int i=0 ; i<n ;i++){
        // phase 1
        for(int j=0 ; j<i+1 ; j++){
            cout << "* ";
        }

        
        // space (phase 2)
        for(int j=0; j<n-i-1 ; j++){
            cout << "  ";
        }
        // space (phase 3)
        for(int j=0 ; j< n-i-1; j++){
            cout << "  ";
        }
        //  * print (phase 4)
       for(int j=0;j<i+1;j++){
        cout << "* ";
       }
       cout << endl;
    }
    // Bottom
    for(int i=0; i<n; i++){
        for(int j=0; j<=n-i-1;j++){
            cout << "* ";
        }
        // space (phase 6)
         for(int j=0; j<i;j++){
            cout << "  ";
        }
        // space (phase 7)
         for(int j=0; j<i;j++){
            cout << "  ";
        }
        // * print (phase 8)
        for(int j=0; j<=n-i-1;j++){
            cout << "* ";
        }
        cout << endl;

}
    return 0;
}
