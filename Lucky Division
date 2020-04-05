#include <iostream>
#include <string>
#include <algorithm>
#include<vector>

using namespace std;

int main()
{
    vector <int> v{4,7,47,74,77,477,447,44,777,444,747,744,474,774};
    vector <int>::iterator it;
    int n,inc=0;

    cin >> n;
    it=find(v.begin(),v.end(),n);
    if(it!=v.end())
    {
        cout << "YES";
    }else{

        for(int i=0; i<v.size(); i++)
        {
            if(n % v[i] == 0)
            {
                cout << "YES";
                break;
            }else{
                inc++;
            }
        }
    }

     if(inc == 14)
        {
            cout << "NO";
        }

    return 0;
}
