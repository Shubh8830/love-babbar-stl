#include <iostream>
#include <vector>
using namespace std;
int main(){


  
  vector <int> v;
  cout<<"Size->"<<v.capacity()<<endl;//size mean kitne elements hain...

  v.push_back(1);
  cout<<"capacity->"<<v.capacity()<<endl;//capacity mean kitni jgh h

  v.push_back(2);
  cout<<"capacity->"<<v.capacity()<<endl;

 v.push_back(3);
  cout<<"capacity->"<<v.capacity()<<endl;//yha capacity 4 ho jayegi q ki size badhane pe ye apni capacity double kr leta hai..

  cout<<"size->"<<v.size()<<endl;

  cout<<"Elements at 2nd index ->"<<v.at(2)<<endl;

  cout<<"front->"<<v.front()<<endl;
  cout<<"back->"<<v.back()<<endl;


  cout<<"before pop"<<endl;
  for(int i:v){
    cout<<i<<" ";
  }
  cout<<endl;
  v.pop_back();

   cout<<"after pop"<<endl;
   for(int i:v){
     cout<<i<<" ";
   }
  }
