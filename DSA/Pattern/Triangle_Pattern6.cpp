#include<iostream>
using namespace std;

int main(){
    int N;
    cout<<"Enter any Number :-";
    cin>>N;
    for (int i = 0; i < N; i++)
    {
        char ch = 'A'+i;
        for (int j = 0; j < i+1; j++)
        {
            cout<<ch;
           
        }
        cout<<endl;
    }
    return 0;
}