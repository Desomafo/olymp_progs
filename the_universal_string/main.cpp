#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string* sub_strs = new string[n];

    for (int i = 0; i < n; i++) {
        cin >> sub_strs[i];
    }
    bool is_yes;
    for (int i = 0; i < n; i++) {
        is_yes = true;
        if (sub_strs[i].length() == 1) {
            cout << "YES" << endl;
            continue;
        }
        for (int pos = 0; pos < sub_strs[i].length() - 1; pos++) {
            if ((int)sub_strs[i][pos+1] - (int)sub_strs[i][pos] != 1 && (int)sub_strs[i][pos] - (int)sub_strs[i][pos+1] != 25) {
                is_yes = false;
                cout << "NO" << endl;
                break;
            }
        }
        if (is_yes) {
            cout << "YES" << endl;
        }
    }
    return 0;
}
