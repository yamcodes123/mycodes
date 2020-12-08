#include<iostream>
using namespace std;
int main()
{
    int a;
    while(1){
    cin>>a;
    if(a>10&&a<20){
        cout<<"Hello";
    }
    else if(a>20&&a<30){
        cout<<"World!";
    }
    else if(a>30&&a<40)
        cout<<"Hello World!";
    else
        cout<<"Welcome";
    };
    return 0;
}
