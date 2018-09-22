#include<bits/stdc++.h>
using namespace std;
set <int> s;

int main(){
  s.insert(5);
  s.insert(6);
  s.insert(5);
  s.insert(5);
 set <int> :: iterator it;
 for(it=s.begin(); it!=s.end(); it++){
    cout<<*it<<" "<<s.size()<<endl;
 }
 return 0;
}
