#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=4;i<=n;i++){
        if(i%4==0){
            cout<<i<<endl;
        }
    }
    return 0;
}