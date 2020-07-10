// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/weak-numbers.html .

std::vector<int> weakNumbers(int n) {
    using namespace std;
    vector<int> divisors(n, 0);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                divisors[i - 1]++;
            }
        }
    }
    vector<int> weaks(n, 0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (divisors[j] > divisors[i]) {
                weaks[i]++;
            }
        }
    }
    int best = *max_element(weaks.begin(), weaks.end()), count = 0;
    for (int i = 0; i < n; i++) {
        if (weaks[i] == best) {
            count++;
        }
    }
    return vector<int>{best, count};
}
