// Linear Search using Vector

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){

//    vector <int> vec = {11,28,3,4,55,6,7,82,9};
//    int key = 55;
   
//    cout << "Key value : " << key << endl;
//    for(int i : vec) {
//     if( vec[i] == key){
//         cout << "Index value : " <<  i << endl;
//     cout << "Index " << i << " Value : "<< vec.at(i);
//     }
//    }

//     return 0;
// }

// Reverse Array print in vector using Function

#include<iostream>
#include<vector>
using namespace std;

int reverseVector(vector <int> vec , int sz){
 
 cout << " Your Array : ";
 for(int i=0 ; i<sz ; i++ ){
        cout << vec.at(i) << " ";
    }
    cout << endl;
    cout << " Reverse Array : ";
  for(int i=sz-1 ; i>=0 ; i-- ){
        cout << vec.at(i) << " ";
    }
  cout << endl;
}

int main(){

    vector <int> vec = {1,2,3,4,5,6};
    int sz = vec.size();
    reverseVector(vec,sz);

    return 0;
}