#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (n < 3) {
        cout << 0 << endl;
        return 0;
    }

    vector<long long> left_max(n), right_max(n);

    left_max[0] = arr[0];
    for (int i = 1; i < n; i++) {
        left_max[i] = max(left_max[i - 1], arr[i]);
    }

    right_max[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        right_max[i] = max(right_max[i + 1], arr[i]);
    }

    long water = 0;
    for (int i = 0; i < n; i++) {
        long min_height = min(left_max[i], right_max[i]);
        if (min_height > arr[i]) {
            water += min_height - arr[i];
        }
    }
