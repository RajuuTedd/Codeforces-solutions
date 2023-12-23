//A.    Morning 
#include<bits/stdc++.h>
using namespace std;

int min_seconds_to_enter_pin(const string& pin) {
    vector<vector<int>> keypad_layout = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {0, -1, -1}
    };

    auto get_position = [&](int digit) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 3; j++) {
                if (keypad_layout[i][j] == digit) {
                    return make_pair(i, j);
                }
            }
        }
        return make_pair(-1, -1);
    };

    int total_seconds = 0;
    int current_digit = 1;  // Start at digit 1
    for (char digit : pin) {
        pair<int, int> pos1 = get_position(current_digit);
        pair<int, int> pos2 = get_position(digit);
        total_seconds += abs(pos1.first - pos2.first) + abs(pos1.second - pos2.second);
        current_digit = digit - '0';
    }

    return total_seconds;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string pin;
        cin >> pin;
        int seconds = min_seconds_to_enter_pin(pin);
        cout << seconds << endl;
    }

    return 0;
}


