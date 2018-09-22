#include<bits/stdc++.h>
using namespace std;
vector <int> v ;

 main(){

   v.push_back(5);
    v.push_back(6);
     v.push_back(7);
      v.push_back(8);
       v.push_back(9);

   for(vector <int>::iterator i = v.begin(); i!=v.end(); i++){
               cout<<*i<<" ";
   }
  return 0;
}
