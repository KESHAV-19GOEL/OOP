#include<iostream>
#include<string.h>
using namespace std;
class hero{
  private:

  int health;

    public :

char *name = new char[10];
int have_health()
{
    return health;
}   
  static int time;

    char level;


int gethealth(int input)
{health = input;
  return health;
};

void setname(char name[])
{
   strcpy( this -> name , name);
}


static int rand(){
return time+2;

}
};

int hero:: time =5;
int main()
{

//hero a;
cout<<hero:: time<<endl;
hero a;
hero b;
b.time = 34;
// cout<<b.time;
// cout<<a.time;
cout<<endl<<endl<<a.rand();

  return 0;
}


