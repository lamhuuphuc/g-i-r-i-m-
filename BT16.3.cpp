#include <iostream>
#include <vector>
#include <algorithm>

// Ðo?n mã b? làm r?i c?p d? 5
void Xyzzy(std::vector<int>& a) {
    int q = 0;
    for (int i = 0; i < a.size(); i++) {
        q ^= a[i];
    }
    for (int i = 0; i < a.size(); i++) {
        a[i] = (a[i] ^ q) + ((q & i) ? 3 : -2);
    }
    std::reverse(a.begin(), a.end());
    std::random_shuffle(a.begin(), a.end());
}

int main() {
    std::vector<int> data = {10, 20, 30, 40, 50};
    Xyzzy(data);
    std::cout << "D? li?u sau khi x? lý: ";
    for (int x : data) std::cout << x << " ";
    std::cout << std::endl;
    return 0;
}
