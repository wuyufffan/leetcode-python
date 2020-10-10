#include <stdio.h>
# include <vector>
# include <iostream>
# include <algorithm>
# include <map>
using namespace std;
// int* twoSum_1(int* nums, int numsSize, int target,int* returnSize){ //返回值为int *类型
//     int*result = (int*)malloc(2 *sizeof(int));
//     for (int i = 0; i < numsSize; i ++){
//         for (int j = i + 1; j < numsSize; j ++){
//             if (target - nums[i] == nums[j]){
//                 result[0] = i;
//                 result[1] = j;
//                 *returnSize = 2;
//                 return result;
//             }
//         }
//     }
//     *returnSize = 0;
//     return 0;
// } //暴力解法两重循环，c指针版,时间复杂度O（n²），空间复杂度O（1）

// vector<int> twoSum(vector<int>& nums, int target) {
//     int n = nums.size();
//     for (int i = 0; i < n; ++i){
//         for(int j = i + 1; j <n; ++j){
//             if (nums[i] + nums[j] == target){
//                 return {i,j};
//             }
//         }
//     }
//     return {};
// } //c++ 版暴力解法,初始化一个新的vector容器需要一定的时间





// vector<int> twoSum(vector<int>& nums, int target) {
//     int n = nums.size();
//     vector<int>ans;
//     vector<int>temp;
//     temp = nums;
//     sort(temp.begin(),temp.end()); //temp从小到大排序,nlogn
//     int i = 0, j = n - 1;
//     while(i < j){      //双指针法找数 n
//         if (temp[i] + temp[j] < target){
//             i++;
//         }
//         else if (temp[i] + temp[j] > target){
//             j--;
//         }
//         else break; //不
//     }

//     if(i < j){          //index, n
//         for(int k = 0; k < n; k++){
//             if(i < n && temp[i] == nums[k]){
//                 ans.push_back(k);
//                 i = n;
//             }
//             else if(j < n && temp[j] == nums[k]){
//                 ans.push_back(k);
//                 j = n;
//             }  //这个else非常关键,避免了i和j重复的情况
//             if(i==n & j==n) return ans;  //提前返回
//         }
//     }
//     return ans;
// } //时间复杂度nlogn,空间复杂度n




vector<int> twoSum(vector<int>& nums, int target){
    //在leetcode中使用unordered_map 更快
    map<int,int> hashtable;
    for (int i = 0; i < nums.size(); ++i){
        auto it = hashtable.find(target - nums[i]);
        if (it != hashtable.end()){
            return {it->second, i};
        }
        hashtable[nums[i]] = i;
    }
    return {};
}




int main(){
    vector<int>nums = {2,7,11,15};
    int target = 9;
    vector<int>result = twoSum(nums,target);
    cout << "result is:"<<endl;
    for (int i = 0; i < result.size(); i++){
        cout << result[i]<< endl;
    }
}

