#include<iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int count;
    cin>>count;

    // 54321
    //  4321
    //   321
    //    21
    //     1

    for (int i = count; i > 0; i--)
    {
        for (int j = count; j > 0; j--)
        {
            if(j > i) cout<<" ";
            else cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}