// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/bubblesort-once.html .

using namespace std;

std::vector<int> bubbleSortOnce(const std::vector<int> &input) {
    vector<int> res;
    for (auto num : input) {
        if (res.empty()) {
            res.push_back(num);
        } else {
            if (res.back() > num) {
                res.insert(res.begin() + res.size() - 1, num);
            } else {
                res.push_back(num);
            }
        }
    }
    return res;
}
