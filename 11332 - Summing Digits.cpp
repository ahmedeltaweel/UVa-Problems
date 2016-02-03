#include <bits/stdc++.h>
using namespace std;

int sum(int num)
{
    int sum = 0;
    while(num != 0)
    {
        sum += num %10;
        num/=10;
    }
    return sum;
}

int main(void)
{

    //freopen("c.in" , "r" , stdin);
    while (true)
    {
        int n = 0 ;
        cin >> n;
        if(n == 0)
        {
            return 0;
        }
        while(n / 10 != 0 )
        {
            n = sum(n);
        }
        cout << n << endl;
    }
    return 0;
}
