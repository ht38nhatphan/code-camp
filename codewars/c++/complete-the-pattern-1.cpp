// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/complete-the-pattern-1.html .

string pattern(int n) {
    if (n < 1) {
        return "";
    }
    string res;
    for (int i = 1; i <= n; i++) {
        string item;
        for (int j = 1; j <= i; j++) {
            item += to_string(i);
        }
        res += item;
        if (i != n) {
            res += "\n";
        }
    }
    return res;
}
