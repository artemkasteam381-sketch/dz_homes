#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, m;
    if (!(std::cin >> n >> m)) return 0;

    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) std::cin >> a[i];

    std::vector<int> b(m);
    for (int i = 0; i < m; ++i) std::cin >> b[i];

    std::vector<int> result(n + m);
    
    // Алгоритмическое слияние STL
    std::merge(a.begin(), a.end(), b.begin(), b.end(), result.begin());

    for (int i = 0; i < n + m; ++i) {
        std::cout << result[i] << (i + 1 == n + m ? "" : " ");
    }
    std::cout << "\n";

    return 0;
}
