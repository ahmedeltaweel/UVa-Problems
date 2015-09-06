#include <iostream>

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    //freopen("c.in" , "rt" , stdin);
#endif // ONLINE_JUDGE

    while(true)
    {
        int k = 0 ;

        scanf("%d" , &k);
        if(k==0)
            break;

        int n , m , x ,y;

        scanf("%d %d" , &n , &m);

        while(k--)
        {
            scanf("%d %d" , &x , &y);

            x-=n;
            y-=m;

            if(x > 0 && y > 0)
                printf("NE\n");

            else if (x < 0 && y > 0)
                printf("NO\n");

            else if (x > 0 && y < 0)
                printf("SE\n");

            else if (x < 0 && y < 0)
                printf("SO\n");

            else
                printf("divisa\n");
        }
    }
    return 0;
}
