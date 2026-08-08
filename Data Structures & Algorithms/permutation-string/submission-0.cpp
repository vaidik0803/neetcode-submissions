class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        sort(s1.begin(),s1.end());
        if(n>m)return false;
        int i=0,j=n-1;
        while(j<m){
           string t = s2.substr(i, j - i+1);
            sort(t.begin(), t.end());
            if(t==s1)return true;
            i++;j++;
        }
        return false;
    }
};