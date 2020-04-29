#include<iostream>

using namespace std;
long long int a=0,b=0,c=0;
int solve(int n,long long int k)
{
    if(n<2)
    {
        a=a+k;
        b=0;
        c=0;
        cout << a <<" "<< b <<" " << c;
        return 0;
    }
    n=n-2;
    if(n >= 0)
    {
        a=0;
        c=0;
        b=b+k;
    }
    n=n-8;
    if(n >= 0)
    {
        a=0;
        b=0;
        c=c+k;
    }else{
        cout << a <<" "<< b <<" " << c;
        return 0;
    }
    n=n-16;
    if(n>=0)
    {
    return solve(n,k*2);
    }
    else{
        cout << a <<" "<< b <<" " << c;
        return 0;
    }

}
int main()
{
    int n;
    cin >> n;

    solve(n,1);
    return 0;
}
