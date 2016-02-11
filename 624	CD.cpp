#include <bits/stdc++.h>
using namespace std;
#define N 20
bool cd[N] , t[N];
int cds [N];
int ans , n , num;


void backtrack(int label)
{
    if(label == num)
    {
        int tmp = 0;
        for(int i = 0 ; i < num ; i++)
        {
            if(t[i])
            {
                tmp += cds[i];
            }
        }
        if(tmp <= n)
        {
            if(ans < tmp)
            {
                ans = tmp;
                for(int i = 0 ; i < num ; i++)
                {
                    cd[i] = t[i];
                }
            }
        }
        return;
    }

    t[label] =true;
    backtrack(label + 1);
    t[label] = false;
    backtrack(label+1);
}


int main(void)
{

    //freopen("c.in" , "r" , stdin);

    while(cin >> n)
    {
        cin >> num;
        for(int i = 0 ; i < num ; i++)
        {
            cin>>cds[i];
        }

        ans = 0;

        for (int i = 0 ; i < num ; i++)
        {
            cd[i] =false;
        }

        backtrack(0);

        for(int i = 0 ; i < num ; i++)
        {
            if(cd[i])
            {
                cout << cds[i] << " ";
            }
        }

        cout << "sum:" << ans << endl;

    }
    return 0;
}
