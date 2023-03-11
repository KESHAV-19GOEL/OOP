#include<iostream>

using namespace std;
class hero{
  private:





  int health;
  
    public :

    hero (){

    cout<<"Constructor called\n";
}

    //int health =23;
    char level;

int gethealth(int input)
{health = input;
  return health;
};


};
int main()
{
hero* h1;
hero *h2;
 h1 = new hero[2] ;


  //  cout<<"Size of hero is "<<sizeof(h1.health)<<"    ";
  //  h1.health = 12;
  //      cout<<h1.health;

  //  cout<<endl<<"health of h2 is "<<h2.health;
cout<<"start the process\n";
int n;
cin>>n;
cout<<"Health of h1[0] is :"<<(h1[0]).gethealth(n);
cout<<"\nHealth of h1[1] is :"<<(h1[1]).gethealth(n);


 


  return 0;
}


