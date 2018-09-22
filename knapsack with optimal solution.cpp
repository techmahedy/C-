#include<bits/stdc++.h>
using namespace std;
int main(){
    float a[50],aa[50],s[10];
    int n,temp,i,j,y=1,weight=0,sum=0,difference=0;
    int constraints,u;
    float x[20],profit=0;
    cout<<"Enter object & constraints "<<endl;
    cin>>n>>constraints;
     cout<<"Enter profit and weight"<<endl;
     for(int i=0; i<n; i++){
        cin>>a[i];
        cin>>aa[i];
     }
     for(i=0; i<n; i++){
       s[i]=a[i]/aa[i];
     }
    for(i=0; i<n-1; i++){
       for(j=i+1; j<n; j++){
          if(s[i]<s[j])
          temp=s[j];
          s[j]=s[i];
          s[i]=temp;

          temp=a[j];
          a[j]=a[i];
          a[i]=temp;

          temp=aa[j];
          aa[j]=aa[i];
          aa[i]=temp;
       }
    }

      for(i=0; i<n; i++){
          sum=sum+aa[i];

        if(sum>constraints){
            difference=constraints-weight;
            y = difference/aa[i+1];

        }

            if(sum<=constraints){
                 profit = profit+a[i]*y;
            weight = weight+aa[i];
            }
      }

   cout<<profit<<endl;
 return 0;
}
