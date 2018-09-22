#include<bits/stdc++.h>
using namespace std;

int knapsack(int w, int wt[], int val[], int n){

    if( n == 0|| w == 0)
          return 0;
    if(wt[n-1] > w)
          return knapsack(w,wt,val,n-1);
    else
          return max(val[n-1]+knapsack(w-wt[n-1],wt,val,n-1),knapsack(w,wt,val,n-1));


}
int main(){
    int w[]={18,15,10};
    int v[]={25,24,15};
  cout<<knapsack(20,w,v,3);
 return 0;
}

