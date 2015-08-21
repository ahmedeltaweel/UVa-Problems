/********************************
* Ahmed El-Taweel
* ahmed.m.eltaweel@gmail.com
*********************************/
#include <iostream>

using namespace std;

int main()
{

#ifndef OLINE_JUDGE
   // freopen("c.in","rt",stdin);
#endif

    int arr[13] ,count = 0;

    int k;

    while(true)
    {

        cin >> k;

        if(k == 0)
            break;

        if (count++)
			printf("\n");

        for(int i = 0 ; i < k ; i++)
            cin >> arr[i];


        for(int ia = 0 ; ia < k-5 ; ia++)
            for(int ib = ia+1 ; ib < k-4 ; ib++)
                for(int ic = ib+1 ; ic < k-3 ; ic++)
                    for(int id = ic+1 ; id < k-2 ; id++)
                        for(int ie = id+1 ; ie < k-1 ; ie++)
                            for(int i_f = ie+1 ; i_f < k ; i_f++)
                                printf("%d %d %d %d %d %d\n", arr[ia], arr[ib], arr[ic],arr[id], arr[ie], arr[i_f]);

    }

    return 0;
}
