#include <iostream>
#include <list>
using namespace std;
class stack1
{
public:
    int element,a;
    list<int>s;
    list<int>::iterator itr;
public:
    void push(){
    cout<<"enter the number:"<<endl;
    cin>>a;
    s.push_back(a);
    }
    void display(){
    for(itr=s.begin();itr!=s.end();++itr){
        cout<<*itr<<endl;
    }
    void pop()
    {
    itr=s.end;
    itr--;
    s.pop_back();
    cout<<"the element popped out of stack is:"<<*itr<<endl;
};

class queue1;
{
public:
    int element1;
    int b;
    list<int>q;
    list<int>::iterator itr;
public:
    void push(){
    cout<<"enter the number:">>endl;
    cin<<b;
    q.push(b);
    }
    void display(){
        for(itr=q.end();itr!=q.begin();--itr){
        cout<<*itr<<endl;
    }
    void pop(){
         itr=s.front();
         itr++;
    q.pop();

    }
    cout<<"the element popped out of stack is:"<<*itr<<endl;
};
int main()
{
    stack1 s1;
    stack2 s2;
}
