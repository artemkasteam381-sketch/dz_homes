#include <iostream>
#include <vector>
#include <unordered_set>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    if (!(std::cin >> n)) return 0;

    std::vector<int> unique_elements;
    std::unordered_set<int> seen;

    for (int i = 0; i < n; ++i) {
        int val;
        std::cin >> val;
        // Если элемент еще не встречался, добавляем в результат и в множество
        if (seen.find(val) == seen.end()) {
            seen.insert(val);
            unique_elements.push_back(val);
        }
    }

    for (size_t i = 0; i < unique_elements.size(); ++i) {
        std::cout << unique_elements[i] << (i + 1 == unique_elements.size() ? "" : " ");
    }
    std::cout << "\n";

    return 0;
}
