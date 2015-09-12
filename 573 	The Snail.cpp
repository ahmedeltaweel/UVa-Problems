#include <iostream>

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("c.in" , "rt" , stdin);
#endif // ONLINE_JUDGE

    int  h , d ,F , counter = 1 ;
    double u , dis  ,f;

    while(cin >> h >> u >> d >> F && h > 0)
    {

        f = u * F / 100;
        dis = 0;
        counter =1;

        while (true)
        {

            dis += u;

            if(u > 0)
                u -= f;

            if(dis > h)
            {
                printf("success on day %d\n", counter);

                break;
            }

            dis -= d;

            if(dis < 0)
            {
                printf("failure on day %d\n", counter);
                break;
            }

            counter ++;

        }

    }
    return 0;
}
