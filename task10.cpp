#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    if (!(std::cin >> n)) return 0;
    std::set<int> set1;
    for (int i = 0; i < n; ++i) {
        int val;
        std::cin >> val;
        set1.insert(val);
    }

    int m;
    if (!(std::cin >> m)) return 0;
    std::set<int> set2;
    for (int i = 0; i < m; ++i) {
        int val;
        std::cin >> val;
        set2.insert(val);
    }

    std::vector<int> intersection;
    
    // Алгоритм STL для нахождения пересечения отсортированных множеств
    std::set_intersection(set1.begin(), set1.end(),
                          set2.begin(), set2.end(),
                          std::back_inserter(intersection));

    for (size_t i = 0; i < intersection.size(); ++i) {
        std::cout << intersection[i] << (i + 1 == intersection.size() ? "" : " ");
    }
    std::cout << "\n";

    return 0;
}
