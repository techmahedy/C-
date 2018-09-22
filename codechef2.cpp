#include <bits/stdc++.h>
  using namespace std;

  #define ll long long

  int main()
  {

     ll n,  revenue, result=0;
     cin>>n;
     int *arr = new int[n];
     for(ll i=0; i<n; i++)
     {
       cin>>arr[i];
     }
     sort(arr, arr+n);
     for (ll i=0; i<n; i++)
     {
       revenue = arr[i]*(n-i);
       result = max(result, revenue);
     }
     cout<<result<<endl;
     free(arr);

     return 0;
  }
