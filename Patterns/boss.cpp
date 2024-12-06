#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=4;
    int track=0;
    for(int i=0;i<n;i++){
        track = n-i;
        for(int j=n;j>=track;j--){
            cout<<j;
            
        }
        int dummy =track;
        while(dummy>1){
            cout<<track;
            dummy--;
        }
        dummy = track-1;
        while(dummy>1){
            cout<<track;
            dummy--;
        }
        for(int j=track;j<=n;j++){
            if (j==1) continue;
            cout<<j;
            
        }
    cout<<endl;
    }
    for(int i=0;i<n;i++){
        if (i==0) continue;
        track =2;
        for(int j=n;j>=track;j--){
            cout<<j;
        }
        int dummy = track;
        while(dummy>1){
            cout<<track;
            dummy--;

        }
        dummy = track-1;
        while(dummy >1){
            cout<<track;
            dummy--;

        }
        for(int j=track;j<=n;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}