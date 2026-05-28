#include <iostream>
#include <string>
#include <queue>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    if (!(std::cin >> n)) return 0;

    std::queue<int> q;

    for (int i = 0; i < n; ++i) {
        std::string command;
        std::cin >> command;

        if (command == "push") {
            int x;
            std::cin >> x;
            q.push(x);
        } else if (command == "pop") {
            if (!q.empty()) {
                q.pop();
            }
        } else if (command == "front") {
            if (!q.empty()) {
                std::cout << q.front() << "\n";
            }
        } else if (command == "size") {
            std::cout << q.size() << "\n";
        }
    }

    return 0;
}
