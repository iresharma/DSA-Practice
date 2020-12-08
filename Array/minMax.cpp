// Finding min and max in the array

#include<iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("../input.txt", "r", stdin);
        freopen("../output.txt", "w", stdout);
    #endif
    int size;
    int arr[50];
    int small, large = 0;
    int temp1, temp2, tempSmall, tempLarge;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    small = arr[size - 1];
    for (int i = 0; i < size/2; i++)
    {
        temp1 = arr[i];
        temp2 = arr[i + size/2];
        tempSmall = temp1 > temp2 ? temp2 : temp1;
        tempLarge = (temp1 + temp2) - tempSmall;
        if(small > tempSmall) {
            small = tempSmall;
        }
        if (large < tempLarge)
        {
            large = tempLarge;
        }
    }
    large = large > arr[size - 1] ? large : arr[size - 1];
    cout<<"Large : "<<large<<endl;
    cout<<"Small : "<<small;
    return 0;
}