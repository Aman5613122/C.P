#include<iostream>

using namespace std;
int sum=0;
int solve(int a[],int n)
{

    if(n <= a[4])
    {
        return (sum+1);
    }
    n=n-a[4];
    sum++;
    return solve(a,abs(n));

}
int main()
{
    int n;
    cin >> n;
    int a[]={1,2,3,4,5};

    cout << solve(a,n);
    return 0;
}
