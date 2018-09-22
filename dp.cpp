#include<bits/stdc++.h>
using namespace std;
int table[50][50];

int nCr(int n, int r){

   if(r==1)
    return n;

   if(n==r)
    return 1;

   if(table[n][r]!= -1)
     return table[n][r];

      else
    return table[n][r] = nCr(n-1, r) + nCr(n-1, r-1);
}
int main(){
    memset(table,-1,sizeof(table));
   cout<<nCr(5,2);
  return 0;
}
