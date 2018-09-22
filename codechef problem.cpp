#include <bits/stdc++.h>
using namespace std;

int main(){
  int t,n,count=0;
  cin>>t;
  while(t--){
      cin>>n;
       int xenny[n];
       int yana[n];
        int time1=0,time2=0;
    for(int i=1; i<=n; i++){
        cin>>xenny[i];
    }
     for(int j=1; j<=n; j++){
         cin>>yana[j];
     }
    for(int i=1; i<=n; i=i+2){
        count=count+2;
          if(n%count==0){
            time1=time1+xenny[i]+yana[count];
          }
        else{

        if(count>n){
                time1=time1+xenny[i];
                goto print;
        }
        time1=time1+xenny[i]+yana[count];
      }
    }
    print:
    count=0;
    for(int i=1; i<=n; i=i+2){
        count=count+2;
          if(n%count==0){
            time2=time2+xenny[i]+yana[count];
          }
        else{
        if(count>n){
                time2=time2+xenny[i];
                goto point;
        }
        time2=time2+xenny[i]+yana[count];
      }
    }
    point:
        if(time1>time2)
            cout<<time2<<endl;
        else
            cout<<time1<<endl;
      }
  return 0;
}


