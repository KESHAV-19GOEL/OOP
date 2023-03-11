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


hero (int health,char level){

    //cout<<"Constructor called\n";
this -> health = health;
this -> level = level;//level of class = level input


}

hero (hero& h1){

    cout<<" Copy constructor called\n";
this -> health = h1.health;
this -> level = h1.level;//level of class = level input

char *c = new char[10];
strcpy(c,h1.name);
this -> name = c;
//this -> name = h1.name;

}

int gethealth(int input)
{health = input;
  return health;
};

void setname(char name[])
{
   strcpy( this -> name , name);
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
hero h1(n,'C');
h1.setname(name);
h1.print();

hero h2 = hero(h1);

strcpy(h1.name,"nothing");
h1.print();
h2.print();

  return 0;
}


