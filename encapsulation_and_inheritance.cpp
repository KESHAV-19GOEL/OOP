#include<bits/stdc++.h>
using namespace std;

class human{
protected:
int num;

public:
int sex;
int age,height ;

};
class male :public human{
public:
string name;
void check(){
cout<<"Men would be men"<<endl;
};

void getnum()
{
  cout<<(this->num = 0)<<endl;
};

};

int main()
{
       male m1;

       cout<<endl<<endl<<(m1.height = 5);
cout<<endl<<(m1.name = "KD")<<endl;
m1.check();
m1.getnum();
  return 0;
}