#include <iostream>
#include <bits/stdc++.h>
using ll = long long;
using ld = long double;


using namespace std;


int main()
{
    string str;
    bool flag;
    getline(cin,str);
    int n=str.size();
    if(n>=2 && str[0]=='/' && str[1]=='/')
    {
        flag=true;
    }
    else if(n>=4 && str[0]=='/' && str[1]=='*' && str[n-1]=='/' && str[n-2]=='*')
    {
        flag=true;
    }
    else {
        flag=false;
    }
    if(flag==true)
    {
        cout << "it is a comment" <<endl;
    }
    else {
        cout << "it is not a comment" <<endl;
    }
    return 0;
}
