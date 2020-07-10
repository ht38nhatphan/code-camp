// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/covfefe.html .

#include <regex>

std::string covfefe(std::string s) {
    using namespace std;
    regex reg("coverage");
    bool found = false;
    while (regex_search(s.begin(), s.end(), reg)) {
        string tmp;
        regex_replace(back_inserter(tmp), s.begin(), s.end(), reg, "covfefe");
        s = tmp;
        found = true;
    }
    if (!found) {
        s += " covfefe";
    }
    return s;
}
