#include<iostream>

using namespace std;

long long gcd(long long a, long long b)
{
    if(b == 0)
        return a;
    else
    {
        a = a % b;
        return gcd(b , a); 
    }
}

main()
{
    long long a = 0;
    long long b = 0;

    //cout<<"Give a:";
    cin>>a;
    //cout<<"Give b:";
    cin>>b;

    //cout<<"GCD("<<a<<" , "<<b<<") :"<<gcd(a, b);
    cout<<gcd(a, b);
    return 0;
}