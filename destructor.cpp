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
   
   void print(){
cout<<"Health is : "<<health<<"\t"<<"level is : "<<level<<"   name is : "<<name<<endl;

   }

    //int health =23;
    char level;






int gethealth(int input)
{health = input;
  return health;
};

void setname(char name[])
{
   strcpy( this -> name , name);
}

~ hero(){
cout<<"destructor called"<<endl;

}

};
int main()
{
// hero* h1;
// hero *h2;
//  h1 = new hero[2](n,m) ;


 
cout<<"start the process and enter name\n";
int n;char name[10];

cin>>n>>name;


hero *h2 = new hero;
//delete h2;

  return 0;
}


