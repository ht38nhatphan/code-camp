// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/new-numeral-system.html .

std::vector<std::string> newNumeralSystem(char number) {
    using namespace std;
    vector<string> res;
    int num = number - 'A';
    for (int i = 0; i <= num / 2; i++) {
        string item = "";
        item += (char)('A' + i);
        item += " + ";
        item += (char)('A' + num - i);
        res.push_back(item);
    }
    return res;
}
