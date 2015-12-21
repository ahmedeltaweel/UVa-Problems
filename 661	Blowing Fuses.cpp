#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
#define sz(v) (int)(v.size())
#define clr(v, d) memset(v, d, sizeof(v))
#define pb push_back
#define mp make_pair
#define F first
#define S second


using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector< vector<int> > vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

const ll OO = (ll)1e18+7;
const int mod = (int)1e9+7;
const int MAX = (int)1e5+5;

int n;


int main(void)
{

    //freopen("c.in" , "r" , stdin);
    int counter = 0;
    while(true)
    {
        int n , m , c , max_capacity = 0 , capacity = 0;
        cin >> n >>m >> c;

        if(n == 0 && m == 0 && c == 0)
        {
            break;
        }

        counter++;
        vi ni;
        vector<bool> state(n ,false);
        vi mi;

        while(n--)
        {
            int x;
            cin >>x;
            ni.pb(x);
        }
        while(m--)
        {
            int x;
            cin >>x;
            mi.pb(x);
        }

        for(int i = 0 ; i < mi.size() ; i++)
        {
            if(state[mi[i]-1] == false)
            {
                capacity += ni[mi[i]-1];
                state[mi[i]-1] = true;
                if(capacity >= max_capacity)
                {
                    max_capacity = capacity;
                }
            }
            else
            {
                capacity -= ni[mi[i]-1];
                 state[mi[i]-1] = false;
            }
        }
        cout << "Sequence " << counter << endl;
        if(max_capacity > c)
        {
            cout <<"Fuse was blown."<<endl;
        }
        else
        {
            cout <<"Fuse was not blown."<<endl;
            cout << "Maximal power consumption was " << max_capacity << " amperes."<<endl;
        }
        cout << endl;
    }


    return 0;
}
