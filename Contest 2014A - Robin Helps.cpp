#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; // number of test cases
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n); // gold of each person
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int robinGold = 0; // Robin starts with 0 gold
        int giveCount = 0; // count of people who get gold from Robin

        for (int i = 0; i < n; i++) {
            if (a[i] >= k) {
                // Robin takes all the gold from this person
                robinGold += a[i];
            } else if (a[i] == 0 && robinGold > 0) {
                // Robin gives 1 gold if he has any
                giveCount++;
                robinGold--;
            }
        }

        cout << giveCount << endl;
    }

    return 0;
}

