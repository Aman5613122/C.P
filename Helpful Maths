#include <iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main(void)
{
    string n1;
    vector<int>v;
    cin >> n1;
    char x= '+';
    n1.erase(remove(n1.begin(),n1.end(),x),n1.end());
    for(int y:n1){
        v.push_back(y-48);
    }

    sort(v.begin(),v.end());
    int si=v.size();
    for(int i=0;i<si;i++)
    {
        cout << v[i];
        if(i!=si-1)
        {
            cout << "+";
        }
    }
    retirn 0;
}
