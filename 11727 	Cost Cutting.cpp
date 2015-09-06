#include <iostream>

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
   // freopen("c.in" , "rt" , stdin);
#endif // ONLINE_JUDGE

    int t = 0;
    int s1 , s2 , s3;
    int i = 1;

    cin >> t;

    while(t--)
    {
        cin >> s1 >> s2 >>s3;

        if ((s1 > s2 && s1 < s3) || (s1 < s2 && s1 > s3))
            cout << "Case "<< i << ": "<<s1 <<endl;
        else if ((s2 > s1 && s2 < s3) || (s2 < s1 && s2 > s3) )
            cout << "Case "<< i << ": "<<s2 <<endl;
        else if ((s3 > s1 && s3 < s2) || (s3 < s1 && s3 > s2) )
            cout << "Case "<< i << ": "<<s3 <<endl;

        i++;
    }

    return 0;
}
