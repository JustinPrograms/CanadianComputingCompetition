#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <climits>
#define ll long long
#define pi 3.14159265359
#define yes std::cout << "YES" << endl
#define no  std::cout << "NO" << endl


using namespace std;

void solve();




int main() {
    solve();

    return 0;
}

void solve() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;

    cin >> t;


    for (int i = 0; i < t; i++) {
        unsigned long long num;
        cin >> num;

        string og = to_string(num);

        cout << num << "\n";
        for (int i = 0; i < INT_MAX; i++) {
            int past;
            if (to_string(num).length() == 2) {
                if (num % 11 == 0) {
                    cout << "The number " << og << " is divisible by 11.\n\n";
                    break;
                }
                cout << "The number " << og << " is not divisible by 11.\n\n";
                break;

            }
            past = num % 10;
            num = num / 10;
            num = num - past;
            cout << num << "\n";

        }

    }

}
