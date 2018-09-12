//Authors: 
#include <iostream>
#include <string>
using namespace std;
int main()
{
  string first;
  string second;
  int third;
  string fourth;
  string fifth;

  cout<<"Enter a goofy noun."<<endl;
  cin>>first;

  cout<<"Enter a celebrity name or plural noun."<<endl;
  cin>>second;

  cout<<"Enter a whole number."<<endl;
  cin>>third;

  cout<<"Enter a verb."<<endl;
  cin>>fourth;

  cout<<"Enter a goofy word."<<endl;
  cin>>fifth;

  cout<<"Here is the MadLib:"<<endl<<endl;

  cout<<"If I had a "<<first<<" for everytime I thought about "<<second<<", "<<endl;
  cout<<"I would have about "<<third<<" of them. Now if I had all of that, I "<<endl;
  cout<<"would probably "<<fourth<<" or go completely "<<fifth<<endl;

  return 0;
}
