#include <iostream>
#include <cstring>

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
   // freopen("c.in" , "rt" , stdin);
#endif // ONLINE_JUDGE

    double month , down , price , ration[100] , own;
    int m , k ;

    while(cin >> month >> down >> price >> k && month >= 0)
    {
        own = price;
        double topay = price / (double)month;
        price += down;
        for(int i=0;i<=month;i++) ration[i]=-1;

        for(int i = 0 ; i < k ; i ++)
        {
            cin >> m;
            cin >> ration[m];
        }

         for(int i = 1 ; i < month ; i ++)
        {
            if(ration[i] == -1)
                ration[i] = ration[i-1];
        }
        int ans = -1;
        int i = 0;
        while(ans == -1)
        {
            price = price - price*ration[i];
            if(price > own) ans = i;
            own -= topay;
            i++;
        }

        cout<<ans<<" month";
        if(ans!=1) cout<<"s";
        cout<<"\n";


    }

    return 0;
}
