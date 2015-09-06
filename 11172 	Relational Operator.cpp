#include <iostream>

using namespace std;

int main() {

//#ifndef ONLINE_JUDGE
//   //freopen("c.in", "rt", stdin);
//#endif


    int t = 0 ;
    int a , b;

    scanf("%d" , &t);

    while(t--)
    {
        scanf("%d %d" , &a , &b);

        if(a > b)
            printf(">\n");
        else if (a < b)
            printf("<\n");
        else
            printf("=\n");
    }

    return 0;
}
