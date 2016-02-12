#include <bits/stdc++.h>
using namespace std;

#define N 100

string dis[N];
char tupple[256];
int n , m ,id , len;
string rule;

void backtrack(int index)
{
    if(index == len)
    {
        for(int i = 0 ; i < len ; i++)
        {
            if(tupple[i]== '#')
                cout << dis[id];
            else
                cout << tupple[i];
        }
        cout << endl;
    }
    else if(rule[index] == '#')
    {
        tupple[index] = '#';
        backtrack(index+1);
    }
    else
    {
        for(int i = 0 ; i <=9 ; i++)
        {
            tupple[index] = i+'0';
            backtrack(index+1);
        }
    }
}

int main(void)
{

    freopen("c.in" , "r" , stdin);

    while(scanf("%d" , &n) == 1)
    {
        cout<<"--"<<endl;
        for(int i = 0 ; i < n ; i++)
        {
            cin >> dis[i];
        }
        scanf("%d" , &m);

        for(int i = 0 ; i < m ; i++)
        {
            cin>>rule;
            len = rule.size();
            for(int j = 0 ; j < n ; j++)
            {
                id = j;
                backtrack(0);
            }

        }
    }

    return 0;
}
