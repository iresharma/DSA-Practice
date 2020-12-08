#include<iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int count;
    cin>>count;

    //     1
    //    212
    //   32123
    //  4321234
    // 543212345

    for (int i = 1; i <= count; i++)
    {
        for (int k = 0; k < count - i; k++)
        {
            cout<<" ";
        }

        for (int j = i; j >= 1; j--)
        {
            cout<<j;
        }
        for (int l = 2; l <= i; l++)
        {
            cout<<l;
        }
        cout<<"\n";
    }
    return 0;
}