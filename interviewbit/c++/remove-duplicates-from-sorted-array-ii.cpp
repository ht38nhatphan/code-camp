// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/remove-duplicates-from-sorted-array-ii.html .

int Solution::removeDuplicates(vector<int> &A) {
    int n = A.size();
    if (n <= 2)
        return n;
    int j = 2, ppre = A[0], pre = A[1];
    for (int i = 2; i < n; i++) {
        int now = A[i];
        if (now == pre && now == ppre) {
        } else {
            A[j++] = now;
        }
        ppre = pre;
        pre = now;
    }
    A.resize(j);
    return A.size();
}
