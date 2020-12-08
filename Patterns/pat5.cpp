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
    //    121
    //   12321
    //  1234321
    // 123454321
    
    for (int i = 0; i < count; i++)
    {
        for (int k = 0; k < count - i - 1; k++)
        {
            cout<<" ";
        }
        
        for (int j = 0; j < i; j++)
        {
            cout<<j + 1;
        }
        for (int h = i + 1; h > 0; h--)
        {
            cout<<h;
        }
        cout<<"\n";        
    }
    return 0;
}