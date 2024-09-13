// Practice Qs-1 : WAF to calculate sum & product of all number in an array

// #include<iostream>
// using namespace std;

// int main(){
       
//      int num[5];
//      int n = 5;
//      int sum = 0, product = 1;
//      cout << "Enter values : ";
//      for(int i=0 ; i<n ; i++){
//         cin >> num[i];
//      }
//      for(int i=0 ; i<n ; i++){
//         sum += num[i];
//         product *= num[i];
//      }
//        cout << "Sum of values = : " << sum << endl;
//        cout << "Product of values = : " << product << endl;
//     return 0;
// }

// Practice Qs-2 : WAF to swap the max & min number of an array.

// #include<iostream>
// using namespace std;

// int main(){
//    int arr[] = { 5,9,2,3,1,8,4};
//    int pos[7];
//    int sz = 7;
//   int smallest = __INT_MAX__;
//    int larger = __FLT_MIN__;
//    for(int i=0; i < sz; i++){
//    //   smallest = min (arr[i] , smallest);
//    //   larger = max (arr[i] , larger);
//    while(arr[i]<smallest){
//       smallest = arr[i];
//    }
//     while(arr[i]>larger){
//       larger = arr[i];
   
//    }
// }
// std:: cout << "Your Array is : ";
// for(int i=0; i < sz; i++){
//    std:: cout << arr[i] << " " ;
// }
// std:: cout << endl;
// int m = smallest, m1 = larger;
// std:: cout << "Maximum Value : " << m1 << endl;
// std:: cout << "Minimum Value : " << m << endl;

// std::cout << "New Array is : ";
//    for(int i=0;i<sz;i++){
//       if(arr[i] == smallest){
//          swap (arr[i],m1);
//         std:: cout << arr[i] << " ";
//       }
//       else if(arr[i] == larger){
//          swap (arr[i],m);
//          std:: cout << arr[i] << " ";
//       }
//      else{
//         std:: cout << arr[i] << " ";
//       }
//    }
//    std:: cout << endl;
//       return 0;
// }

// Practice Qs-3 : WAF to print all the unique values in an array.

// #include<iostream>
// using namespace std;

// int main(){
//    int arr[] = {1,2,3,1,2,3,4};
//    int sz = 7;
//    bool isbool = true;
//    for(int i=0; i<sz; i++){
//       for(int j=i+1; j<sz; j++){
//          if(arr[i] == arr[j]){
//             isbool = false;
//          }
//          else{
//             arr[i]=true;
//          }
//              if(arr[i] == true){
//               arr[i]= arr[j];
//        }
//       }
//    }
//    std:: cout << "Unique Values : ";
  
//       for(int i=0; i<sz; i++){
//       std:: cout << arr[i] << " ";
//       break;
//     }
//     std:: cout<<endl;
//    return 0;
// }

// Practice Qs-4 : WAF to print insertion of 2 array

#include<iostream>
using namespace std;

int main(){
int arr1[] = {1,2,3,4,5};
int m = 5;
int arr2[] = {6,7,3,1};
int n = 4;
for(int i=0; i<m ; i++){
   for(int j=0; j<n; j++){
      if(arr1[i] == arr2[j]){
         cout << arr1[i] << " ";
      }
   }
}
cout << endl;
return 0;
}