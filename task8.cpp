#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, k;
    if (!(std::cin >> n >> k)) return 0;

    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    std::sort(a.begin(), a.end());

    // k-й элемент соответствует индексу k - 1
    std::cout << a[k - 1] << "\n";

    return 0;
}
