#include<bits/stdc++.h>
using namespace std;
 vector< int > v;
int main()
{
   char line[1000];
    while( gets( line ) ) {
        stringstream s( line ); // initialize kortesi
        int num;
        while( s >> num )
            v.push_back( num );
        sort( v.begin(), v.end() );
        cout<<s;
    }
}
