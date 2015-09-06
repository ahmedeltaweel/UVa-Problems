#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
   // freopen("c.in" , "rt" , stdin);
#endif // ONLINE_JUDGE

    int counter = 1;
   int t = 0 ;

   cin >> t ;
   int n;
   while(t--)
   {
        cin >> n;
        int arr [n];
        for (int i = 0 ; i < n ; i++)
        {
            cin >> arr[i];
        }


        int maxE = arr[0];
        for (int i = 1 ; i < n ; i++)
        {
            if(arr[i] > maxE)
                maxE = arr[i];
        }

        cout << "Case "<<counter<<": " << maxE << endl;
        counter++;
   }
    return 0;
}
