#include<iostream>
#include<string.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    char s[n];
    cin >> s;
    int z=0,m=0;
    for(int i=0;i<n;i++)
    {
        if(s[i] == 'z')
        {
            z++;
        }else if(s[i] == 'n')
        {
            m++;
        }
    }
    while(m--)
    {
        cout << "1 ";
    }
    while(z--)
    {
        cout << "0 ";
    }
    return 0;
}
