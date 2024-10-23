#include<iostream>
using namespace std;

int main(){
    int m;

    cout<<"Enter the number";
    cin>>m;
    int Num = 1;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<Num<<" ";
            Num++;  
        }
        cout<<endl;
    }
    
}