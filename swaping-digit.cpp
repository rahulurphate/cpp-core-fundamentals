#include <iostream>
using namespace std;
int main(){
int x=2;
int y=5;
cout<<x<<" "<<y<<endl;
int temp=x;//we need to take temp int because if we do y=x then 
//it print x new value because x become 5 now x=y
x=y;
y=temp;
cout<<x<<" "<<y;

}