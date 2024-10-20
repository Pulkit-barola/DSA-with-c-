#include<iostream>
using namespace std;

int main(){
    int B;
    cout<<"Enter the name";
    cin>>B;

    for (int i = 0; i < B; i++)
    {
        for (int j = 1; j <=i+1; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    
}