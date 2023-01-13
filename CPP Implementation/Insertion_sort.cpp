#include<bits/stdc++.h>
using namespace std;

vector<int> insertion_sort(vector<int> &arr)
{
    int n = arr.size();

    for(int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }

    return arr;
}

int main()
{
    vector<int> arr = {2,7,5,1,8,4};
    vector<int> sorted = insertion_sort(arr);

    for(int i = 0; i < sorted.size(); i++)
    {
        cout<< sorted[i] << " ";
    }
}