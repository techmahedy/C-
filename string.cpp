#include<bits/stdc++.h>
using namespace std;
int main()
{
    char line[150];
    int i,j;
    gets(line);
    for(i=0; line[i]!='\0'; i++){
        while(!(line[i]>='a'&&line[i]<='z')||line[i]=='\0'){
            for(j=i; line[j]!='\0'; j++){
                line[j]=line[j+1];
            }
            line[j]='\0';
        }
    }
    cout<<"Output"<<endl;
    puts(line);
    return 0;
}

