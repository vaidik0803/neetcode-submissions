class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=position.size();
        if(n==1)return n;
        vector<pair<int,double>>v;
        for(int i=0;i<n;i++){
            v.push_back({position[i],(double)(target-position[i])/speed[i]});
        }
        sort(v.begin(),v.end());
        stack<double>s;
        for(int i=0;i<n;i++){
            s.push(v[i].second);
        }
        int count=0;
        while(!s.empty()){
            double t=s.top();
            s.pop();
            while(!s.empty()&&s.top()<=t){
                s.pop();
            }
            count++;
        }
        return count;
    }
};