class Solution {
public:
    string reverseWords(string s) {
       istringstream ss(s);
        string B;
        if(s.size()==0) return B;
        while(ss){
            string A;
            ss>>A;
            int k=0;
            for(auto c:A){
                if(c!=' ')k++;
            }
            if(k==0 && B.size()==0) return B;
            B=A+" "+B;
        }
        if(B.size()>0){
            B.erase(0,1);
            B.erase(B.size()-1,1);
        }
        return B;
    }
};
