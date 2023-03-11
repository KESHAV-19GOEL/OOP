#include<iostream>
using namespace std;
class animal{
public:
void speak()
{
    cout<<"Speaking\n";
}
void life(){
cout<<"College will not come again\n";
}

};

class dog : public animal{
public:
void speak()
{
    cout<<"Barking\n";
}};


int main()
{
       
dog d1;

cout<<"Dog is ";d1.speak();cout<<endl;

d1.life();





  return 0;
}