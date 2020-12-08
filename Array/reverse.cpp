// Reversing an array

#include<iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("../input.txt", "r", stdin);
        freopen("../output.txt", "w", stdout);
    #endif
    int arr[50];
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n/2; i++)
    {
        int temp = arr[n - i - 1];
        arr[n - i -1] = arr[i];
        arr[i] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
    return 0;
}