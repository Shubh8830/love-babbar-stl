#include <iostream>
#include <deque>


using namespace std;

int main(){
    deque <int> d;

    d.push_back(1);
    d.push_front(2);
    
    /* for(int i :d){
        cout<<i<<" ";

    } */
    //PUSH AUR POP
    /* d.pop_front();
    cout<<endl;
    for (int i: d){
        cout<<i<<" "; }*/
    /* d.pop_back();
    cout<<endl;
    for(int i: d){
        cout<<i<<" ";
    } */
cout<<endl;
//index pe element ese find krenge..

cout<<"Print First index element->"<<d.at(1)<<endl; 

//front and back element kon sa h ese dekhenge..

cout<<"front->"<<d.front()<<endl;
cout<<"back->"<<d.back()<<endl;
cout<<"Empty or not->"<<d.empty()<<endl;
cout<<"before erase"<<d.size()<<endl;
for(int i:d){
     cout<<i<<endl;
}
d.erase(d.begin(),d.begin()+1);
cout<<"after erase"<<d.size()<<endl;
for(int i:d){
    cout<<i<<endl;
}
}
    