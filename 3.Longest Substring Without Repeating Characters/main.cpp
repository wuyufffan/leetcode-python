#include<cstring>
#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // 哈希集合，记录每个字符是否出现过
        set<char>set_temp;
        int i = 0, j = 0, result = 0;
        int n = s.length();
        while (i < n && j < n){
            if(set_temp.count(s[i]) == 0){
                set_temp.insert(s[i]);
                i += 1;
                result = max((int)set_temp.size(), result);
                if (set_temp.size() > result){
                    result = set_temp.size();
                }
            }
            else{
                while(set_temp.count(s[i])){
                    set_temp.erase(s[j]);
                    j += 1;
                }
            }
        }
        return result;
    }
};

int main(){
    Solution s;
    string ss = "pwwkew";
    // cout << s.lengthOfLongestSubstring(ss) << endl;
    cout << s.lengthOfLongestSubstring(ss) << endl;
    return 0;
}