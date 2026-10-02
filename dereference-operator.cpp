#include <iostream>
using namespace std;
int main(){
int x=25;
int* prt=&x;
cout<<x<<endl;
cout<<&x<<endl;
cout<<*prt<<endl;//*prt=x=25 ,*prt=&x means is address pe jao jo value he print karo
cout<<prt<<endl;
}