class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vv = {};
        for(int i = 1; i <= numRows; i++){
            if(i == 1){
                vv.push_back({1});
            }
            else{    
                if(i == 2){
                    vv.push_back({1,1});
                }
                else{
                  vector<int> v = {1};
                  for(int j = 1; j < i-1; j++){
                      v.push_back(vv[i-2][j-1] + vv[i-2][j]);
                  }
                  v.push_back(1);
                  vv.push_back(v);
                }
            }
        }
        return vv;
    }
};
