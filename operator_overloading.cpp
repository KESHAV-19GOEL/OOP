#include<iostream>
using namespace std;


class B{
public:

int a ,b;

int operator + (B & obj)
{
    return (this-> a  - obj.a);

}

void operator () (){

cout<<"College will not come again\n";

}

};

int main()
{
       
B a,b;
a.a = 6728; b.a = 4;
cout<<"a - b  = "<<a+b<<endl<<endl;

a();


  return 0;
}