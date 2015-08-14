/** *******************
* Ahmed El-Taweel
* UVA 119 - Greedy Gift Givers
* ahmed.m.eltaweel@gmail.com
*********************************/

#include <iostream>
#include <map>

using namespace std;

int n ;
string names[ 10 ];
int money[10];
map < string , int > index;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("c.in", "rt", stdin);
#endif


    string name;
    bool line = false;
    int p;
    int price , m , spent;

    while(cin >> n && !cin.eof())
    {

        index.clear();
        p=0;
        m=0;
        spent=0;
        price=0;

        for(int i = 0 ; i < n ; i++)
        {
            cin >> names[i];
            index[names[i]] = i;
            money[i] = 0;
        }

        for(int i = 0 ; i < n ; i++)
        {
            cin >> name;

            p = index[name];
            cin >> spent >> m;
            money[p] -= spent;

            if(m)
            {
                price = spent / m;
                money[p] += spent % m;
            }
            else
            {
                money[p] += spent;
            }

            while (m--)
            {
                cin >> name;
                p = index[name];
                money[p] += price;
            }

        }
        if(line)
        {
            cout << endl;

        }
        line = true;

        for(int i = 0 ; i < n ; i++)
        {
            cout << names[i] << " " <<money[i] <<endl;
        }

    }

    return 0;
}
