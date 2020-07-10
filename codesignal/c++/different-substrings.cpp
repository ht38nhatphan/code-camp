// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/different-substrings.html .

int differentSubstrings(std::string inputString) {
    using namespace std;
    set<string> cache;
    int n = inputString.size();
    for (int len = 1; len <= n; len++) {
        for (int i = 0; i + len <= n; i++) {
            string s = inputString.substr(i, len);
            cache.insert(s);
        }
    }
    return cache.size();
}
