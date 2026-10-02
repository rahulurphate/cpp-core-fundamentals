#include <iostream>
using namespace std;
void usa(){cout<<"you are in usa"<<endl;}
void india(){cout<<"you are in india"<<endl;
usa();//we need to clarify function above your call
}
int main(){
usa();
cout<<"you are in main"<<endl;
india();
return 0;//return in kind of break but it has many other uses too
usa();
}