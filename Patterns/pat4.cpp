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
    //    1 2 
    //   1 2 3 
    //  1 2 3 4 
    // 1 2 3 4 5 

    for (int i = 0; i < count; i++)
    {
        for (int j = 1; j < count - i; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout<<k + 1<<" ";
        }
        cout<<"\n";
    }
    return 0;
}