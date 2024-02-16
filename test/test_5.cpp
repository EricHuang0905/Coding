#include <iostream>
using namespace std;

// int buyicecream(int index, int remain) {
//     if (remain == 0) return 1;
//     if (index >= 4) return 0;

//     int price[4];
//     price[0] = 2;
//     price[1] = 5;
//     price[2] = 10;
//     price[3] = 20;

//     int ans = 999999;
//     for (int i = 0; i * price[index] <= remain; i++) {
//         int t = buyicecream(index + 1, remain - i * price[index]);
//         if (t >= 0) {
//             if (t + i < ans) ans = t + i;
//         }
//     }
//     return ans;
// }

int main() {
    int N;
    cin >> N;
    int index = 0;

    // cout << buyicecream(index, N) << "\n";

    bool purchase[N];
}