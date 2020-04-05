#include <iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main(void)
{
    string in;
    cin >> in;
    int zero=0,one=0;
    for(int i=0;i<in.size();i++)
    {
        if(in[i]=='0')
        {
            zero++;

                if(one!=0 && one < 7)
                {
                    one=0;
                }
        }else if(in[i]=='1')
        {
            one++;
            if(zero!=0 && zero < 7)
            {
                zero=0;
            }
        }
    }
    if((zero>=7)||(one>=7))
    {
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}
