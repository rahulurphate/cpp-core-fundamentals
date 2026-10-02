#include <iostream>
using namespace std;
int main(){
    int n;
cout<<"enter number of n";
cin>>n;
int a=1;
for(int i=1;i<=n;i++){
for(int j=1;j<=i;j++){if((i+j)%2==0){a=1;}; if((i+j)%2!=0){a=0;} ;cout<<a<<" ";}
cout<<endl; 
}

}