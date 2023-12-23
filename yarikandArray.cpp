#include <bits/stdc++.h>
using namespace std;

int max_subarray(int a[], int n) {
    long long even_sum = 0, odd_sum = 0, max_sum = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            even_sum += a[i];
        } else {
            odd_sum += a[i];
        }

        max_sum = max(max_sum, max(even_sum, odd_sum));
    }

    return max_sum;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        cout << max_subarray(a, n) << endl;
    }

    return 0;
}
