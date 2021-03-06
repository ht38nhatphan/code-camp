// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/fraction-comparison.html .

char fractionComparison(std::vector<int> a, std::vector<int> b) {
    using namespace std;
    double a1 = a[0], a2 = a[1];
    double b1 = b[0], b2 = b[1];
    int base = 10000;
    long long r1 = a1 / a2 * base;
    long long r2 = b1 / b2 * base;
    if (r1 == r2) {
        return '=';
    } else if (r1 < r2) {
        return '<';
    } else {
        return '>';
    }
}
