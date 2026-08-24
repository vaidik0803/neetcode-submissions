class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        
        string t="";
        for(int i=0;i<n;i++){
            if(tolower(s[i])>='a'&&tolower(s[i])<='z'){
                t+=tolower(s[i]);
            }
            else if(s[i]>='0'&&s[i]<='9')t+=s[i];
        }
        int k=0;
        int j=t.size()-1;
        while(k<=j){
            if(t[k]!=t[j])return false;
            k++;j--;
        }
        return true;
    }
};
