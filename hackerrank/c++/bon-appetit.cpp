// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/bon-appetit.html .

void bonAppetit(vector<int> bill, int k, int b) {
    int sum = 0;
    for (int i = 0; i < bill.size(); i++) {
        if (i != k) {
            sum += bill[i];
        }
    }
    int res = b - sum / 2;
    if (res > 0) {
        cout << res << endl;
    } else {
        cout << "Bon Appetit" << endl;
    }
}
