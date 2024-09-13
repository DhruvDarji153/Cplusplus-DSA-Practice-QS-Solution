// #include<iostream>
// using namespace std;
 
//   int main(){
//     char name;
//     cout << "Enter your String : ";
//     cin >> name;   //common

//     if(name>= 'A' && name< 'Z'){
//         cout << "string is UPPERCASE.";
//     } else{
//        cout << "string is LOWERCASE.";
//     }

  // Using ASCII Value
   // if(name>= 65 && name< 90){
   //      cout << "string is UPPERCASE.";
   //  } else{
   //     cout << "string is LOWERCASE.";
   //  }
 

    // Practice Qs : Sum of numbers from 1 to n
    //  #include<iostream>
    //  using namespace std;

    //  int main(){
    //  int n,sum=0;
    //  std::cout << "Enter Number you want to sum : ";
    //  cin >> n;
    //  for (int i=1 ; i<=n;i++){
    //   sum+=i;
    //  }
    //  cout << "sum = " << sum;

     // Practice Qs : Sum of all odd numbers from 1 to n
    
    //  #include<iostream>
    //  using namespace std;

    //  int main(){
    //  int n,sum=0;
    //  cout << "Enter Number you want to sum : ";
    //  cin >> n;
    //  for (int i=1 ; i<=n;i++){
    //   if (!(i % 2 == 0)){
    //   sum+=i;
    //  }
    //  }
    //  cout << "sum = " << sum;


    // Practice Qs : Sum of all numbers from 1 to n which is divisible by 3

    // #include<iostream>
    // using namespace std;

    // int main(){
    //  int n,sum=0;
    //  std:: cout << "Enter value of number : ";
    //  cin >> n;
    //  for(int i=1 ; i<=n ; i++){
    //   if(i % 3 == 0){
    //     sum += i;
    //   }
    //  }
    //  cout << sum << endl;


    // Practice Qs : check if a number is prime or not

    // #include<iostream>
    // using namespace std;

    // int main(){
    // int n,i;
    // bool isPrime = true;
    // cout << "Enter a Number : ";
    // cin >> n;

    //   for(i=2 ; i * i< n; i++){
    //      if(n % i == 0){
    //         isPrime = false;
    //          break;
    //      }
    //   }

    //   if(isPrime == true){
    //      cout << n << " is Prime Number.";
    //   }else{
    //      cout << n << " is not Prime Number.";
    //   }

    // print x star *
    
    // #include<iostream>
    // using namespace std;

    // int main(){
    // int m;
    // cout << "Enter you want to print star : ";
    // cin >> m;
    // for (int i=0 ; i<m ; i++){
    //   for(int j=0 ; j<m ; j++){
    //     cout << "*";
    //   }
    //   cout << "\n";
    // }

    // Practice Qs : print Factorial of a number N

     #include<iostream>
    using namespace std;

    int main(){
    int n,fact=1;
    cout << "Enter a value of Number : ";
    cin >> n;
    for(int i=1 ; i<=n ; i++){
      fact = fact * i;
    }
    cout << "Your Factorial of" << n << "is : " << fact << endl;
    
  return 0;
 }