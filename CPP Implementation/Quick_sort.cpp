#include<bits/stdc++.h>
using namespace std;

vector<int> quick_sort(vector<int> &arr)
{
  if(arr.size() <= 1) return arr;

  int pivot = rand() % arr.size();

  vector<int> a,b;

  for(int i = 0; i < arr.size(); i++)
  {
    if(i == pivot) continue;

    if(arr[i] <= arr[pivot])
    {
      a.push_back(arr[i]);
    }
    else
    {
      b.push_back(arr[i]);
    }
  }

  vector<int> sorted_a = quick_sort(a);
  vector<int> sorted_b = quick_sort(b);

  vector<int> sorted_arr;

  for(int i = 0; i < sorted_a.size(); i++)
  {
    sorted_arr.push_back(sorted_a[i]);
  }

  sorted_arr.push_back(arr[pivot]);

  for(int i = 0; i < sorted_b.size(); i++)
  {
    sorted_arr.push_back(sorted_b[i]);
  }

  return sorted_arr;
}

int main()
{
    vector<int> arr = {2,7,5,1,8,4};
    vector<int> sorted = quick_sort(arr);

    for(int i = 0; i < sorted.size(); i++)
    {
        cout<< sorted[i] << " ";
    }

    return 0;
}