#include<bits/stdc++.h>
using namespace std;
long long BigMood(long b, long long p, long long m){
   if(p==0)
    return 1;
   if(p%2==1){
    long long part1=b%m;
    long long part2 = BigMood(b,p-1,m);
    return (part1*part2)%m;
   }
   else if(p%2==0){
    long long half = BigMood(b,p/2,m);
    return (half*half)%m;
   }
}
int main(){
  long long b,p,m;
  while(scanf("%lld%lld%lld",&b, &p, &m)!=EOF){
    cout<<BigMood(b,p,m)<<endl;
  }
  return 0;
}
