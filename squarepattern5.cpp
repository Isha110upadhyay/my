#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE NUMBER OF LINES :  ";
    cin>>n;
    char ch=65;
    for(int i=0;i<=(n-1);i++){
        for(int j=0;j<=n-1;j++){
         cout<<ch<<" ";
         ch=ch+1;
        }
        cout<<endl;
    }
    return 0;
}