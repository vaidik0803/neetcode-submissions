class Solution {
public:
    int evalRPN(vector<string>& tokens) {
     int n=tokens.size();
     stack<int>s;
     for(int i=0;i<n;i++){
        if(tokens[i]=="+"){
            int x=s.top();
            s.pop();
            int y=s.top();
            s.pop();
            s.push(x+y);
        }
      else if(tokens[i]=="-"){
            int x=s.top();
            s.pop();
            int y=s.top();
            s.pop();
            s.push(y-x);
        }
       else if(tokens[i]=="*"){
            int x=s.top();
            s.pop();
            int y=s.top();
            s.pop();
            s.push(x*y);
        }
       else if(tokens[i]=="/"){
            int x=s.top();
            s.pop();
            int y=s.top();
            s.pop();
            s.push(y/x);
        }
        else{
            int t=stoi(tokens[i]);
            s.push(t);
        }

     }   
     return s.top();
    }
};