//https://www.hackerrank.com/challenges/climbing-the-leaderboard/problem?h_r=next-challenge&h_v=zen
//This function will return a vector of Rank of the Climbing Leaderboard:-
#include<iostream>
using namespace std;
vector<int> climbingLeaderboard(vector<int> scores, vector<int> alice) {
    int r=0,i=0;
    int sizeofa=alice.size()-1;
    int sizeofs=scores.size();
    vector<int> res;
    while(i<sizeofs)
    {
        if(scores[i]==scores[i-1]) {i++;continue;}
        else if(scores[i]<= alice[sizeofa])
        {
            r++;
            res.push_back(r);
            r--;
            sizeofa--;
        }
        else 
        {
            r++;
            i++;
        }
    }
    r++;
    while(sizeofa!=-1)
    {
        res.push_back(r);
        sizeofa--;
    }
    reverse(res.begin(),res.end());
 return res;
}
