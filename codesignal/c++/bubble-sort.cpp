// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/bubble-sort.html .

std::vector<int> bubbleSort(std::vector<int> items) {

    int len = items.size();

    for (int i = 0; i < len; i++) {
        for (int j = 0, stop = len - i; j < stop - 1; j++) {
            if (items[j] > items[j + 1]) {
                std::swap(items[j], items[j + 1]);
            }
        }
    }

    return items;
}
