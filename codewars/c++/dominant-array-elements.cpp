// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/dominant-array-elements.html .

using namespace std;

#include <vector>

std::vector<int> solve(std::vector<int> array) {
    vector<int> res;
    int maxi = numeric_limits<int>::min();
    for (int i = array.size() - 1; i >= 0; i--) {
        int num = array[i];
        if (num > maxi) {
            res.push_back(num);
        }
        maxi = max(maxi, num);
    }
    reverse(res.begin(), res.end());
    return res;
}
