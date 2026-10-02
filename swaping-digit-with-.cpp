#include <iostream>
using namespace std;
void swap(int& x,int& y){//we need to take & in int if we not take then 
//it consider x and y as new variable so its value not change swap value
int temp=x;
x=y;
y=temp;
}
int main(){
int x=2,y=5;
cout<<x<<" "<<y<<endl;
swap(x,y);
cout<<x<<" "<<y<<endl;
}