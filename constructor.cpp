#include<iostream>

using namespace std;
class hero{
  private:

  int health;
  
    public :

   

    //int health =23;
    char level;

hero (int health,char level){

    //cout<<"Constructor called\n";
this -> health = health; 
this -> level = level;//level of class = level input

cout<<level<<"     ";
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
cout<<"Health of h1[0] is :"<<(h1).gethealth(n);
//cout<<"\nHealth of h1[1] is :"<<(h1[1]).gethealth(n);


 // & h1 = this of hero


  return 0;
}


