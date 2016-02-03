#include <bits/stdc++.h>
using namespace std;

int main(void)
{

    //freopen("c.in" , "r" , stdin);

    int t = 0;
    scanf("%d" , &t);
    int counter = 1;
    while(t--)
    {
        int x , y , sum = 0;
        cin >> x >> y;
        if (y > x)
        {
            for( int i = x ; i <= y ; i++)
            {
                if(i%2 == 1)
                {
                    sum += i;
                }
            }
        }
        else
        {
            for( int i = x ; i >= y ; i--)
            {
                if(i%2 == 1)
                {
                    sum += i;
                }
            }
        }
        cout << "Case " << counter << ": " << sum<<endl;
        counter ++;

    }
    return 0;
}
