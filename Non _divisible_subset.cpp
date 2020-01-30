//https://www.hackerrank.com/challenges/non-divisible-subset/problem?isFullScreen=false
#include<bits/stdc++.h>
using namespace std;
//Function that return maximum size of subset so that it not divisble by K
int subset(vector<int> a,int k)
{
 int f[k]; // to count the frequencies of remainders
 memset(f,0,sizeof(f));
 for(int i=0;i<a.size();i++)
 {
  f[s[i]%k]++;
 }
 if(k%2==0)
 {
  f[k/2]=min(1,f[k/2]);
 }
 int res=min(1,f[0]); //counts the size of the subset;
 for(int i=1;i<=k/2;i++)
 {
  res+=max(f[k],f[k-i]);
 }
 return res;
}
