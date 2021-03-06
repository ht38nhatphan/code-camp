// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/crossing-sum.html .

int crossingSum(std::vector<std::vector<int>> matrix, int a, int b) {
    using namespace std;
    int sum = 0;
    for (int j = 0; j < matrix[a].size(); j++) {
        sum += matrix[a][j];
    }
    for (int i = 0; i < matrix.size(); i++) {
        sum += matrix[i][b];
    }
    sum -= matrix[a][b];
    return sum;
}
