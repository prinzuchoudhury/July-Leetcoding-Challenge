class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int a=digits.size()-1;
        if(digits[a]==9){
            if(digits[0]==9){
                vector<int> A(a+2,0);
                A[0]=1;
                return A;
            }else{
                while(a>=0){
                    if(digits[a]!=9){
                        digits[a]+=1;
                        break;
                    }else{
                        digits[a]=0;
                    }
                    a--;
                }
            }
        }else{
            digits[a]+=1;
        }
        return digits;
    }
};
