#include <iostream>
#include <map>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    if (!(std::cin >> n)) return 0;

    std::map<int, int> frequencies;
    for (int i = 0; i < n; ++i) {
        int val;
        std::cin >> val;
        frequencies[val]++;
    }

    int max_freq = -1;
    int most_frequent_num = 0;

    // Проход по упорядоченной карте
    for (const auto& pair : frequencies) {
        if (pair.second > max_freq) {
            max_freq = pair.second;
            most_frequent_num = pair.first;
        }
    }

    std::cout << most_frequent_num << "\n";

    return 0;
}
