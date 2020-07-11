class Solution {
public:
    int islandPerimeter(vector<vector<int>>& g) {
        int a=0,b=0;
        for(int i=0;i<g.size();i++){
            for(int j=0;j<g[0].size();j++){
                if(g[i][j]==1){
                    b++;
                    if(i+1<g.size()){
                        a+=(g[i+1][j]==1)?1:0;
                    }if(i-1>=0){
                        a+=(g[i-1][j]==1)?1:0;
                    }if(j+1<g[0].size()){
                        a+=(g[i][j+1]==1)?1:0;
                    }if(j-1>=0){
                        a+=(g[i][j-1]==1)?1:0;
                    } 
                }
            }
        }
        return 4*b-a;
    }
};
