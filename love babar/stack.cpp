#include<iostream>
#include<stack>
using namespace std;
int main() {
    stack<string> s;
    s.push("Saurabh");
    s.push("Gupta");
    s.push("Shah");

    cout<<"Top Element->"<<s.top()<<endl;

    s.pop();
    cout<<"top element->"<<s.top()<<endl;

    cout<<"size of stack"<<s.size()<<endl;

    cout<<"empty or not"<<s.empty()<<endl;
}