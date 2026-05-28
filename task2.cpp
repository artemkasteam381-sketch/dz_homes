#include <iostream>
#include <string>
#include <map>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    if (!(std::cin >> n)) return 0;

    std::map<std::string, int> word_counts;
    std::vector<std::string> order; // Для сохранения порядка вывода как в примере

    for (int i = 0; i < n; ++i) {
        std::string word;
        std::cin >> word;
        if (word_counts[word] == 0) {
            order.push_back(word);
        }
        word_counts[word]++;
    }

    for (const auto& word : order) {
        std::cout << word << " " << word_counts[word] << "\n";
    }

    return 0;
}
