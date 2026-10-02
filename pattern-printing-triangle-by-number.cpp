#include <iostream>
using namespace std;
int main(){
    int row,col;
cout<<"enter number of row";
cin>>row;
cout<<"enter number of col";
cin>>col;
for(int i=1;i<=row;i++){
for(int j=1;j<=col;j++) cout<<j;
cout<<endl;col=col-1;
}

}