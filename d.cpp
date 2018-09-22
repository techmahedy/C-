#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
      if(n%4==0&&n%400==0)
            cout<<"This is leap year."<<endl;
       if(n%15==0)
        cout<<"This is huluculu festival year."<<endl;
     if(n%4==0&&n%400==0&&n%55==0)
        cout<<"This is leap year."<<endl;
        cout<<"This is huluculu festival year."<<endl;
      if(n%4!=0&&n%400!=0&&n%15!=0&&n%55!=0)
        cout<<"This is an ordinary year."<<endl;

    }
  return 0;
}
