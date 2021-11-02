#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
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
        int divs = 0;
        int n;
        cin >> n;

        int j = 1;
        while (j != n) {
            if (n % j == 0) {
                divs += j;
            }
            j++;
        }

        if (divs > n) {
            cout << n << " is an abundant number.\n";
        } else if (n > divs) {
            cout << n << " is a deficient number.\n";
        } else {
            cout << n << " is a perfect number.\n";
        }
    }

}
