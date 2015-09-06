#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    //freopen("c.in" , "rt" , stdin);
#endif // ONLINE_JUDGE

    int n , b , h , w;

    while (cin >> n>> b >> h >> w)
    {
        int p;
        int bed;
        int mincost = 500000;

        for(int i = 0 ; i < h ; i++)
        {
            cin >> p;

            for (int j = 0 ; j < w ; j++)
            {
                cin >> bed;
                if( (bed >= n) )
                {
                    mincost = min(mincost , p*n);
                    string s;
                    getline(cin, s);
                    break;
                }
            }
        }

        if (mincost != 500000 && mincost <= b)
            cout << mincost << endl;
        else
            cout << "stay home" << endl;

    }
    return 0;
}
