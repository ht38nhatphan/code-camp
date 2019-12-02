// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/are-isomorphic.html .

bool areIsomorphic(std::vector<std::vector<int>> array1, std::vector<std::vector<int>> array2) {
    using namespace std;
    if (array1.size() != array2.size()) {
        return false;
    }
    for (int i = 0; i < array1.size(); i++) {
        if (array1[i].size() != array2[i].size()) {
            return false;
        }
    }
    return true;
}

