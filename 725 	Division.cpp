/********************************
* Ahmed El-Taweel
* ahmed.m.eltaweel@gmail.com
*********************************/
#include <stdio.h>


int main()
{

#ifndef OLINE_JUDGE
    //freopen("c.in","rt",stdin);
#endif

    int N = 0 ,counter = 0;

    while(true)
    {
        scanf("%d" ,&N);

        bool found =false;

        if( N == 0 )
            break;

        counter++;
        if(counter > 1)
            printf("\n");

        for (int i = 1234; i <= 98765 / N; i++)
        {

            int numer = i * N;

            int temp , used = (i < 10000);

            temp = numer;
            while(temp)
            {
                used |= 1 << (temp % 10);
                temp /=10;
            }
            temp = i;
            while(temp)
            {
                used |= 1 << (temp % 10);
                temp /=10;
            }
            if (used == (1<<10) - 1)
            {
                printf("%0.5d / %0.5d = %d\n", numer, i, N);
                found =true;
            }
        }

        if (!found)
            printf("There are no solutions for %d.\n", N);
    }
    return 0;
}
