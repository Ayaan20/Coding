#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    char a ='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<(char (a+j))<<" ";
        }
        cout<<endl;
    }

    return 0;
}