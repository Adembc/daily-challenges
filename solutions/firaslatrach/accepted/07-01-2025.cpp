#include <iostream>
#include <string>

using namespace std;

string getMask(int n) {
    string num = to_string(n);
    string mask = "";

    for (char d : num) {
        if (d == '4' || d == '7') {
            mask += d;
        }
    }
    return mask;
}

int main() {
    int a, b;
    cin >> a >> b;

    string t = to_string(b);
    int c = a + 1;
    while (true) {
        if (getMask(c) == t) {
            cout << c << endl;
            break;
        }
        c++;
    }

    return 0;
}
