//https://www.hackerrank.com/challenges/service-lane/problem
//function returns a vector consists of results
int check_min(vector<int> width,int x,int y)
{
    int check=0,check1=0;
    for(int i=x;i<=y;i++)
    {
        if(width[i]==1) return 1;
        if(width[i]==3) check1=3;
        if(width[i]==2) check=2;
    }
    if(check==2) return 2;
    else return 3;
}
vector<int> serviceLane(int n,int t,vector<int> width,vector<vector<int>> cases) {
    vector<int> res;
    for(int i=0;i<t;i++)
    {
        int r=check_min(width,cases[i][0],cases[i][1]);
        res.push_back(r);
    }
    return res;
}
