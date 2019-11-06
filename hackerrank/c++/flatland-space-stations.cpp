// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!

int flatlandSpaceStations(int n, vector<int> c) {
    sort(c.begin(), c.end());
    int res = 0;
    for (int i = 0; i < c.size() - 1; i++) {
        int dist = (c[i + 1] - c[i]) / 2;
        res = max(res, dist);
    }
    res = max(res, c[0]);
    res = max(res, n - 1 - c[c.size() - 1]);
    return res;
}
