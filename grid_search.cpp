/*Complete the gridSearch function in the editor below. It should return YES if the pattern exists in the grid, or NO otherwise.

gridSearch has the following parameter(s):

G: the grid to search, an array of strings
P: the pattern to search for, an array of strings

1234567890  
0987654321  
1111111111  
1111111111  
2222222222 

876543  
111111  
111111

YES
*/
bool firstline(vector<string> g,vector<string> p,int x,int y){
    for(int i=0;i< p[0].size();i++){
        if(g[x][y+i]!=p[0][i]) return false;
    }
    return true;
}
bool matchfound(vector<string> g,vector<string> p,int left,int top){
    for(int i=1;i< p.size();i++){
        for(int j=0;j< p[i].size();j++){
            if(g[top+i][left+j]!=p[i][j])
                return false;
        }
    }
    return true;
}

string gridSearch(vector<string> G, vector<string> P) {
int rowsG=G.size();
int rowsP=P.size();
int colsG=G[0].size();
int colsP=P[0].size();
for(int i=0;i<=(rowsG-rowsP);i++){
    for(int j=0;j<=(colsG-colsP);j++){
        if(G[i][j]==P[0][0]){
            int left,right,top;
            if(firstline(G,P,i,j)){
                left=j;
                top=i;
                if(matchfound(G,P,left,top)){
                    return "YES";
                }
            }
        }
    }
}
return "NO";

}
