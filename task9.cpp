#include <iostream>
#include <string>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    if (!(std::cin >> n)) return 0;

    std::vector<int> history;

    for (int i = 0; i < n; ++i) {
        std::string command;
        std::cin >> command;

        if (command == "add") {
            int x;
            std::cin >> x;
            history.push_back(x);
        } else if (command == "undo") {
            if (!history.empty()) {
                history.pop_back();
            }
        } else if (command == "top") {
            if (!history.empty()) {
                std::cout << history.back() << "\n";
            }
        }
    }

    return 0;
}
