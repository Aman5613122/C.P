#include <iostream>
#include <string>
#include <algorithm>
#include<vector>

using namespace std;

int main()
{
   int n,a,b,pass=0,exit,ente;
   vector<int>v;
   cin >> n;

   for(int i=0;i<n;i++)
   {
       cin >> a >>b;
       pass-=a;
       pass+=b;
       v.push_back(pass);
   }

   cout << *max_element(v.begin(),v.end());
    return 0;
}
