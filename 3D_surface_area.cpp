#include<bits/stdc++.h>
using namespace std;
int operation(int i,int j,int a,int mx,int my,vector<vector<int> > A)
{
    if(A[i][j] > A[i+mx][j+my])
    {
        a-=A[i+mx][j+my];
    }    
    else 
    {
        a-=A[i][j];
    }
    return a;
}
bool safe(int i,int j,int n,int m,int mx,int my)
{
    i=i+mx;
    j=j+my;
    if(i<n&&j<m&&i>=0&&j>=0)
        return true;
    return false;
}
int surfaceArea(vector<vector<int>> A) {  //This function return result=3D surface area of given 3D figure
    int n=A.size();
    int m=A[0].size();
    int res=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int a=4*A[i][j];
            if(safe(i,j,n,m,-1,0))
            {
                a=operation(i,j,a,-1,0,A);
            }
            if(safe(i,j,n,m,0,-1))
            {
                a=operation(i,j,a,0,-1,A);
            }
            if(safe(i,j,n,m,1,0))
            {
                a=operation(i,j,a,1,0,A);
            }
            if(safe(i,j,n,m,0,1))
            {
                a=operation(i,j,a,0,1,A);
            }
            res+=a;
        }
    }
    res+=(2*(n*m));
    return res;
}
