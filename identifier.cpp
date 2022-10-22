#include <bits/stdc++.h>
using ll = long long;
using ld = long double;


using namespace std;

bool isvalid(string str)
{
    int n = str.size();
    if((str[0]>='a' && str[0]<='z') || (str[0]>='A' && str[0]<='Z') || (str[0]=='_'))
    {
        for(int i=1;i<n;i++)
        {
            if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || (str[i]=='_') || (str[i]>='0' && str[i]=='9'));
            else
            {
                return false;
            }

        }

    }
    else 
    {
        return false;
    }
    return true;

}


int main()
{
    string str;
    getline(cin,str);
    bool flag = isvalid(str);
    if(flag==true)
    {
        cout << "valid identfier"<<endl;
    }
    else {
        cout << "not a valid identifier"<<endl;

    }

    return 0;
}