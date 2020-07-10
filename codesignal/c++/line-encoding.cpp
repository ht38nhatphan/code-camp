// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/line-encoding.html .

std::string lineEncoding(std::string s) {
    using namespace std;
    char pre = '\0', count = 0;
    s += " ";
    string res = "";
    for (auto ch : s) {
        if (ch != pre) {
            if (count == 1) {
                res += pre;
            } else if (count > 1) {
                res += to_string(count) + pre;
            }
            pre = ch;
            count = 1;
        } else {
            count++;
        }
    }
    return res;
}
