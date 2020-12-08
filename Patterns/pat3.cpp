#include<iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int count;
    cin>>count;

    //     *****
    //    *****
    //   *****
    //  *****
    // *****


    for (int i = 0; i < count; i++)
    {
        for (int j = 1; j < count - i; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < count; k++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}