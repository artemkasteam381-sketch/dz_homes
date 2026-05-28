#include <iostream>
#include <set>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    if (!(std::cin >> n)) return 0;

    std::set<int> unique_elements;
    for (int i = 0; i < n; ++i) {
        int val;
        std::cin >> val;
        unique_elements.insert(val);
    }

    if (unique_elements.size() < 2) {
        // Если уникальных элементов меньше двух
        return 0;
    }

    // Итератор на самый большой (последний) элемент
    auto it = unique_elements.rbegin();
    // Шаг назад к предпоследнему (второму по величине)
    ++it; 

    std::cout << *it << "\n";

    return 0;
}
