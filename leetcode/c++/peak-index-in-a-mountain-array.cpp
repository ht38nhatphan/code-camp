// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/peak-index-in-a-mountain-array.html .

class Solution {
  public:
    int peakIndexInMountainArray(vector<int> &A) {
        int n = A.size(), pre = A[0];
        for (int i = 1; i < n; i++) {
            if (A[i] > pre) {
                pre = A[i];
            } else {
                return i - 1;
            }
        }
        return -1;
    }
};
