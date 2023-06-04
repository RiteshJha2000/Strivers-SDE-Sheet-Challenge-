class Solution {
public:

    vector<int>n_C_r(int r){
        int res = 1;
        vector<int>v;
        v.push_back(1);
        for(int i=1;i<r;i++){
            res *= (r-i);
            res /= i;
            v.push_back(res);
        }
        return v;
    }

    vector<vector<int>> generate(int n) {
        vector<vector<int>>ans;
        ans.push_back({1});
        for(int r=2;r<=n;r++){
            ans.push_back(n_C_r(r));
        }
        return ans;
    }
};
