
#include <iostream>
#include <string>
#include <algorithm>
#include <ctime>
using namespace std;

string adder(const string& a, const string& b) {
    string result;
    result.reserve(max(a.size(), b.size()) + 1);
    int carry = 0;
    int i = a.size() - 1;
    int j = b.size() - 1;
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';
        result.push_back((sum % 10) + '0');
        carry = sum / 10;
    }
    reverse(result.begin(), result.end());
    return result;
}

int main()
{  
    clock_t first = clock();
    long long n;
    string x = "0",y = "1", z;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        z = adder(x, y);
        x = move(y);
        y = move(z);
    }
    cout << y << "\n";
    clock_t last = clock() - first;
    cout << "The program took " << (float)last / CLOCKS_PER_SEC << " seconds to find the " << n << "th term";
} 