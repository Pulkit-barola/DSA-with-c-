#include<iostream>
using namespace std;

int main(){
    int A;
    cout<<"Enter any number";
    cin>>A;

    for (int i = 0; i < A; i++) // outerloop it can say the go grom a
    {
        //space
        
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j < A-i; j++)
        {
            cout<<(i+1);
            
        }
        
        cout<<endl;
    }
    
}