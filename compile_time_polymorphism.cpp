#include<bits/stdc++.h>
using namespace std;
class c{
public:
void func1(){

    cout<<0<<endl;
}

void func1(int a){

    cout<<a<<endl;
}
void func1(int a,int b){

    cout<<a+b<<endl;
}
void func1(int a,int b,int c){

    cout<<a+b+c<<endl;
}
};
int main()
{c ch;
    ch.func1(0,2,3);   




  return 0;
}