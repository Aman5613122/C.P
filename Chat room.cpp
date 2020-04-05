#include <iostream>
#include <string>
#include <algorithm>
#include<vector>

using namespace std;

int main()
{
    string s;
    string temp="hello";
    cin >> s;
    int j=0,fin=0;
    for(int i=0;i<s.size();i++)
    {
        if(temp[j] == s[i])
        {
            j++;
            fin++;
            if(fin == 5)
            {
                break;
            }
        }
    }

    if(fin == 5)
    {
        cout << "YES";
    }else{
        cout << "NO";
    }
        return 0;
}
