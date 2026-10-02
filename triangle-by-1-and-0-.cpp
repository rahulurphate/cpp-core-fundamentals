#include <iostream>
using namespace std;
int main(){
    int n;
cout<<"enter number of n";
cin>>n;
int a;
 for(int i=1;i<=n;i++){for(int j=1;j<=i;j++){ if(i==j){a=1; cout<<a<<" ";}
if(i!=j){a=0; cout<<a<<" ";}}
cout<<endl;
}
}