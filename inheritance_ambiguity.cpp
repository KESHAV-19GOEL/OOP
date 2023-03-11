#include<bits/stdc++.h>
using namespace std;

class a{
public:
    void func1(){
        cout<<"Func 1 called in a"<<endl;
    }
};

class b{
public:
    void func1(){
        cout<<"Func 1 called in b"<<endl;
    }
};

class c :public a , public b{



};


int main()
{
       c object;
    
     object.a::func1();



  return 0;
}