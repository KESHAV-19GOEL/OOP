#include<iostream>

using namespace std;
class hero{
  private:

  int health;
  
    public :
    //int health =23;
    char level;

int gethealth(int input)
{health = input;
  return health;
};

// void gethealth
// {};


};
int main()
{
hero h1,h2;
 

  //  cout<<"Size of hero is "<<sizeof(h1.health)<<"    ";
  //  h1.health = 12;
  //      cout<<h1.health;

  //  cout<<endl<<"health of h2 is "<<h2.health;
cout<<"start the process";
int n;
cin>>n;
cout<<"Health is :"<<h1.gethealth(n);

  return 0;
}


