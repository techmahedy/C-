#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n;
    char str[10][50],temp[50];
    cin>>n;
    for(i=0; i<n; i++){
        cin>>str[i];
    }
    for(i=0; i<n-1; ++i){
        for(j=i+1; j<n; ++j)
            if(strcmp(str[i],str[j])>0)
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
    }
     for(i=0; i<n; ++i){
        puts(str[i]);
    }
    return 0;
}
