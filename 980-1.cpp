#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    int a,b;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if (2*a<=b){
            cout<<0<<endl;
        }
        else{
            if (a>=b){
                cout<<a<<endl;
            }
            else{
                cout<<b-a<<endl;
            }
        }

    }

    return 0;
}