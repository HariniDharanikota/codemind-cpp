#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    int n,i,s=0;
    cin>>n;
    for(i=01;i<n;i++){
        if(n%i==0){
            s=s+i;
        }
    }
    if(s==n)
        cout<<"True";
    else
        cout<<"False";
    return 0;
}