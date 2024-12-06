#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    char a ='A';
    // a=(char (a+5));
    for(int i=0;i<n;i++){
        char dummy =a+n-1-i;

        for(int j=0;j<=i;j++){
            cout<<dummy<<" ";
            dummy++;
        }
        cout<<endl;
    }



    return 0;
}