#include<iostream>

using namespace std;
class hero{
  private:

  int health;
  
    public :
int have_health()
{
    return health;
}
   
   void print(){
cout<<"Health is : "<<health<<"\t"<<"level is : "<<level<<endl;

   }

    //int health =23;
    char level;

hero (int health,char level){

    //cout<<"Constructor called\n";
this -> health = health;
this -> level = level;//level of class = level input


}


int gethealth(int input)
{health = input;
  return health;
};


};
int main()
{
// hero* h1;
// hero *h2;
//  h1 = new hero[2](n,m) ;


 
cout<<"start the process\n";
int n;
cin>>n;
hero h1(n,'C');
h1.print();

hero h2 = hero(h1);
h2.print();

  return 0;
}


