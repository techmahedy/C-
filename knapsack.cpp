#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;
int main(){
   double a[50],aa[50];
   int n,temp,i,j;
    int constraints,u;
   double x[20],profit=0,s[10];
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
    u=constraints;
      for(i=0; i<n; i++){
          x[i]=0;
        }
        for(i=0; i<n; i++){
        if(aa[i]>u){
          break;
        }
      else{
            x[i]=1.0;
          profit= profit+a[i];
          u=u-aa[i];
        }
      }
      if(i<n)
        x[i]=u/aa[i];
      profit=profit+a[i]*x[i];

   cout<<profit<<endl;
 return 0;
}
