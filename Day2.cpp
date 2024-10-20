// #include<iostream>
// using namespace std;

// int main(){
//     int P;
//     cout<<"Enter any number :-";
//     cin>>P;

//     if(P%2==0){
//         cout<<"This number is even "<< P<<endl;
//     }
//     else{
//         cout<<"This number is odd"<<P<<endl;
//     }

// }

// #include<iostream>
// using namespace std;

// int main(){
//     int Marks;
//     cout<<"Enter the marks here :- "<<endl;
//     cin>>Marks;

//     if(Marks>=90){
//         cout<<"Your grade is A grade " <<Marks<<endl;
//     }
//     else if ((Marks<90)&&(Marks>=80)){
//         cout<<"Your grade is B grade " <<Marks<<endl;
//     }
//     else if ((Marks<80)&&(Marks>=70)){
//             cout<<"your  grade is C grade " <<Marks<<endl;
//     }
//     else if (Marks<70){
//         cout<<"Your grade is D grade " << Marks <<endl;
//     }
//     else
//     {
//         cout <<" invalid choice"<<endl;
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){
//     char ch;
//     cout<<"Enter any character :- "<<endl;
//     cin>>ch;

//     if((ch>='a') &&(ch <= 'z')){
//         cout<<"Lowercase :- " << ch << endl;
//     }
//     else{
//         cout<<"Uppercase :- "<< ch << endl;
//     }
// }


// #include<iostream>
// using namespace std;

// int main(){
//     // int count = 1;

//     // while(count<=10){
//     //     cout<<count<<" "<<endl;
//     //     count++;
//     // }
//     // cout<<endl;
//     // return 0;
//     int m;
//     cout<<"Enter the last number";
//     cin>>m;    //for loop
//     for (int i = 1; i <=m; i++)
//     {
//         cout<<i<<endl;
//     }
    
// }
// sum from 1 to n numbers
// #include<iostream>
// using namespace std;

// int main(){
//     int n,sum;
//     sum = 0;

//     cout<<"Enter the any number :- "<<endl;
//     cin>>n;

//     for (int i = 1; i <=n; i++)
//     { if(i%2!=0){
//         sum = sum + i;
//         // sum+=i;
//         }
//     }
//     cout<<"sum is :-"<<sum<<endl;
// }


// check it is prime or not
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter any number ";
    cin>>n;

    bool isPrime = true;
    for (int i = 2; i <= n-1; i++)
    {
        if(n%i==0){
            isPrime = false;
            break;
        }
    }
    if (isPrime==true)
    {
        cout<<"This is a prime number"<<endl;
    }
    else{
        cout<<"Not prime number";
    }
    
}