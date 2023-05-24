#include <iostream>
#include <array>
using namespace std;
int main() {
  int basic[3]={1,2,3}; //noramlly hum array ko ese create krte hain but stl me...
  array<int,4> a={1,2,3,4};                                 
                     //stl me array ese create krte hain ,cp me hum iska use isliye nhi krte q ki (*array ki implimentation fixed size k array se hoti h..*is liye vector ka use hota h.)//
  int size = a.size();
  for(int i=0;i<size;i++){
    cout<<a[i]<<endl;
  }
}