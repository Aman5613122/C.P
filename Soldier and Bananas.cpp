#include <iostream>
#include <string>
#include <algorithm>
#include<vector>

using namespace std;

int main()
{
   int price_of_banana,total_dollar,number_of_bananas,borrow_dollar=0;
   cin >> price_of_banana  >> total_dollar >> number_of_bananas;

   for(int i=1;i<=number_of_bananas;i++)
   {
       borrow_dollar+=i*price_of_banana;
   }

   borrow_dollar-=total_dollar;
   if(borrow_dollar > 0)
   {
        cout << borrow_dollar;
   }else{
       cout << "0";
   }
        return 0;
}
