//https://www.hackerrank.com/challenges/queens-attack-2/problem?isFullScreen=false
//Program to trance how many blocks can the queen can hit including obstackles
int move(int n,int x,int y,int mx,int my,map<pair<int,int>,int> m) //funtion to count the number of moves and avoid obstacles
{
 int count=0;
 while(x<=n&&y<=n&&y>0&&x>0&&!m){
  x+=mx;
  y+=my;
  count++;
 }
 return count;
}
int queenattack(int n,int k,int r,int c,vector<vector<int> > obs) //function that returns total number to blocks
{
 int count=0;
 map<pair<int,int> ,int> mp;
 while(k--){
  int x=obs[k][0];
  int y=obs[k][1];
  mp[{x,y}]=1;
 }
 count+=move(n,r_q+1,c_q,1,0,mp);
 count+=move(n,r_q-1,c_q,-1,0,mp);
 count+=move(n,r_q,c_q+1,0,1,mp);
 count+=move(n,r_q,c_q-1,0,-1,mp);
 count+=move(n,r_q+1,c_q+1,1,1,mp);
 count+=move(n,r_q-1,c_q-1,-1,-1,mp);
 count+=move(n,r_q-1,c_q+1,-1,1,mp);
 count+=move(n,r_q+1,c_q-1,1,-1,mp);
 return count;
}
