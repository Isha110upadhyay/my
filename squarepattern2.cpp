// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"ENTER THE NUMBER OF LINES :  ";
//     cin>>n;
//     for(int i=0;i<=(n-1);i++){
//         for(char j=65;j<65+n;j++){
//          cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE NUMBER OF LINES :  ";
    cin>>n;
    for(int i=0;i<=(n-1);i++){
        char ch='A';
        for(int j=1;j<=n;j++){
         cout<<ch<<" ";
         ch=ch+1;
        }
        cout<<endl;
    }
    return 0;
}