#include<iostream>
using namespace std;

int main(){

    int A;
    cout<<"Enter any number:-";
    cin>>A;

    for (int i = 0; i < A; i++)
    {
        for (int j = i+1; j > 0; j--)
        {
            cout<<j;

        }
        cout<<endl;
    }
    
}