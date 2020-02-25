#include<bits/stdc++.h>
using namespace std;
//https://www.hackerrank.com/challenges/candies/problem
long candies(int n, vector<int> arr) {
    int arr1[n];
    int arr2[n];
    arr1[0]=1;
    int count=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        {
            count++;
            arr1[i]=count;
        }
        else
        {
            count=1;
            arr1[i]=count;
        }
    }
    count=1;
    arr2[n-1]=1;
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>arr[i+1])
        {
            count++;
            arr2[i]=count;
        }
        else
        {
            count=1;
            arr2[i]=count;
        }
    }
    for(int i=0;i<n;i++)
    {
        arr1[i]=max(arr1[i],arr2[i]);
    }
    long sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr1[i];
    }
    return sum;
}
int main()
{
  vector<int> vec{2,4,2,6,1,7,8,9,2,1};
  cout<<candies(vec.size()-1,vec);
  return 0;
}
