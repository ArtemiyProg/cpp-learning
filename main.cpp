#include <iostream>
#include <string>
using namespace std;

// int main() {
//     cout << "Hello world!" << endl;
//     return 0;
// }

// int main() {
//     int a, b, c;
//     cin >> a >> b >> c;
//     cout << a + b + c << endl;
//     return 0;
// }

int SUM(int a, int b, int c) {
    return a + b + c;
}

int DIFF(int a, int b) {
    return a - b;
}

int PROD(int a, int b) {
    return a * b;
}

int SEP(int a, int b) {
    if (b == 0) {
        return -1;
    }
    return a / b;
}

int main() {
    string command;
    cin >> command;

    if (command == "SUM") {
        int a, b, c;
        cin >> a >> b >> c;
        cout << SUM(a, b, c) << endl;
    }
    if (command == "DIFF") {
        int a, b;
        cin >> a >> b;
        cout << DIFF(a, b) << endl;
    }
    if (command == "PROD") {
        int a, b;
        cin >> a >> b;
        cout << PROD(a, b) << endl;
    }
    if (command == "SEP") {
        int a, b;
        cin >> a >> b;
        cout << SEP(a, b) << endl;
    }

    return 0;
}