#include <iostream>

using namespace std;

void tower(int a, char start, char temp, char to)
{
    if(a==1){
        cout<< " Move disk 1 From " << start << " To" << to <<endl;
    }
    else{
        tower(a-1,start,to,temp);
        cout<< " Move disk " << a << " From " << start <<" to " << to <<endl;
        tower(a-1,temp,start,to);
    }
}

int main()
{
    int n;
    cout<<"*****Tower Of Hanoi*****"<<endl;
    cout<<"Enter Number Of Disk"<<endl;
    cin>>n;
    tower(n,'A','B','C');
    return 0;
}

