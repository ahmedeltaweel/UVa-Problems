/********************************
* Ahmed El-Taweel
* ahmed.m.eltaweel@gmail.com
*********************************/
#include <stdio.h>
#include <algorithm>

using namespace std;

int ops(int t ,int n , int op)
{
    switch(op)
    {
    case 0:
        return t + n;
    case 1:
        return t - n;
    case 2:
        return t * n;
    }

    return 0;
}


int input[5];
int main()
{

//#ifndef OLINE_JUDGE
//    freopen("c.in","rt",stdin);
//#endif


    while(true)
    {


        scanf("%d %d %d %d %d" , &input[0] , &input[1] , &input[2] , &input[3] , &input[4]);

        if(count(input , input + 5 , 0) == 5)
            break;
        bool flag = false;
        sort(input , input + 5);

        do
        {
            for(int a = 0 ; a < 3 ; a++ )
            {
                for(int b = 0 ; b < 3 ; b++)
                {
                    for(int c = 0 ; c < 3 ; c++)
                    {
                        for(int d = 0 ; d < 3 ; d++)
                        {
                            int to = input[0];
                            to = ops(to , input[1] , a);
                            to = ops(to , input[2] , b);
                            to = ops(to , input[3] , c);
                            to = ops(to , input[4] , d);

                            if(to == 23)
                            {
                                flag = true;
                                break;
                            }
                        }


                    }
                }
            }

        }
        while(next_permutation(input , input + 5));

        if (flag)
            printf("Possible\n");
        else
            printf("Impossible\n");
    }
    return 0;
}
