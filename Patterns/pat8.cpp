#include<iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int count;
    cin>>count;

    //     *
    //    ***
    //   *****
    //  *******
    // *********
    // *********
    //  *******
    //   *****
    //    ***
    //     *


    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count - i - 1; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout<<"*";
        }
        for (int l = 1; l <= i; l++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    for (int i = 0; i < count; i++)
    {
        for (int j = count - 1; j > count - i - 1; j--)
        {
            cout<<" ";
        }
        for (int k = 0; k < count - i; k++)
        {
            cout<<"*";
        }
        for (int l = 1; l < count - i; l++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    
    
    
    
    return 0;
}