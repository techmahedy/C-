#include<bits/stdc++.h>
using namespace std;
map < string , char > m;

int main(){
  string mama;
  while(cin>>mama){
    if(mama=="moro")
        break;
    m[mama]++;
    cout << mama <<" ase " << m[ mama ] << " ta :D " << endl;
  }

 return 0;
}

