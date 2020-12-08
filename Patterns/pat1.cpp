#include<iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int count;
    cin>>count;

    // 12345
    // 1234
    // 123
    // 12
    // 1

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count - i; j++)
        {
            cout<<j + 1;
        }
        cout<<"\n";
    }
    return 0;
}