class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> ret;
        map<string, int> m;
        int sum = INT_MAX;
        for(int i = 0, n = list1.size(); i < n; i++)
            m[list1[i]] = i;
        for(int i = 0, n = list2.size(); i < n; i++){
            if(m.count(list2[i])){
                int temp = i + m[list2[i]];
                if(temp < sum){
                    sum = temp;
                    ret = {list2[i]};
                }
                else if(temp == sum)
                    ret.push_back(list2[i]);
            }
        }
        return ret;
    }
};
