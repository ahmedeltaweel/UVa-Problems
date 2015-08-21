/********************************
* Ahmed El-Taweel
* ahmed.m.eltaweel@gmail.com
*********************************/
#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

#ifndef OLINE_JUDGE
  //  freopen("c.in","rt",stdin);
#endif

    int n , a,b,c ;

    cin >> n;


    for(int i = 0 ; i < n ; i++)
    {

        cin >> a >>b >>c;

         bool found =false;
        for(int x = -100 ; x <=100 ; x++  )
        {
            for(int y = -100 ; y <=100 ; y++  )
            {
                for(int z = -100 ; z <=100 ; z++  )
                {
                    if( x != y && y != z && z != x && x+y+z == a && x*y*z == b && x*x + y*y +z*z == c )
                    {
                        if(!found)
                        {
                            cout << x << " " << y << " " << z << endl;
                            found =true;
                        }
                    }
                }
            }
        }

        if(!found)
            cout << "No solution." <<endl;

    }
    return 0;
}
