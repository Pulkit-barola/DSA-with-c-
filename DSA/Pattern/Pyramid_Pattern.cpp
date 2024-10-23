#include<iostream>
using namespace std;

int main(){
    int A;
    cout<<"Enter the any Number :- ";
    cin>>A;
    // outer loop
    for (int i = 0; i < A; i++)
    {
        // inner loop for spaces
        for (int j = 0; j < A-i-1; j++)
        {
            cout<<" ";
        }

        // for 1 number range 

        for (int j = 1; j<=i+1; j++){
            cout<<j;
        }
        

        // for 2 number range 
        for (int j = i; j>0; j--){
            cout<<j;
        }

        cout<<endl;
    }
    
}