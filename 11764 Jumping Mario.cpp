#include <bits/stdc++.h>
using namespace std;

int main(void)
{

    //freopen("c.in" , "r" , stdin);
    int t = 0 ;
    int counter = 1;
    cin >> t;
    while (t--)
    {
        int n = 0 , place1 = 0  , th = 0 , tl = 0;
        cin >> n;
        int arr [n];
        for ( int i = 0 ; i < n ; i ++)
        {
            cin >> arr[i];
        }
        place1 = arr[0];

        for ( int i = 1 ; i < n ; i ++)
        {
            if(arr[i] > place1)
            {
                th ++;
                place1 = arr[i];
            }
            else if (arr[i] < place1)
            {
                tl++;
                place1 = arr[i];
            }
        }
        cout << "Case "<<counter<<": "<<th <<" "<<tl<<endl;
        counter++;

    }
    return 0;
}
