#include<iostream>
#include<queue>

using namespace std;

int main(){
   priority_queue<int> maxi;           //max is_heap...

   priority_queue<int,vector<int>, greater<int> >mini;

   maxi.push(1);
   maxi.push(3);
   maxi.push(2);
   maxi.push(0);

    cout<<"Size-> "<<maxi.size()<<endl;
   int n = maxi.size();
   for(int i=0;i<n;i++){
       cout<<maxi.top()<<" ";
       maxi.pop();
    
   }cout<<endl;


   mini.push(3);
   
   int m= mini.size();
   for(int i=0; i<m;i++){
       cout<<mini.top()<<" ";
       mini.pop();
   }cout<<endl;


   
   cout<<"empty or not->"<<mini.empty()<<endl;
   }