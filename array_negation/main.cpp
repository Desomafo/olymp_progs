#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int *results = new int[n];

    int *array, *mins;
    int arr_size, negs_num;
    int sum;
    for (int i = 0; i < n; i++) {
        sum = 0;
        cin >> arr_size;
        cin >> negs_num;
        array = new int[arr_size];
        for (int pos = 0; pos < arr_size; pos++) {
            cin >> array[pos];
        }
        mins = new int[negs_num];
        for (int pos = 0; pos < negs_num; pos++) {
            mins[pos] = pos;
        }
        for (int pos = 0; pos < arr_size; pos++) {
            for (int min_pos = 0; min_pos < negs_num; min_pos++) {
                if (array[pos] < array[mins[min_pos]]) {
                    for (int shift_pos = negs_num-1; shift_pos > min_pos; shift_pos--) {
                        mins[shift_pos] = mins[shift_pos - 1];
                    }
                    mins[min_pos] = pos;
                }
            }
        }
        for (int min_pos = 0; min_pos < negs_num; min_pos++) {
            array[mins[min_pos]] = -array[mins[min_pos]];
        }
        for (int pos = 0; pos < arr_size; pos++) {
            sum += array[pos];
        }
        results[i] = sum;
        for (int min_pos = 0; min_pos < negs_num; min_pos++) {
            cout << mins[min_pos] << " " << endl;
        }
        delete array;
        delete mins;
    }

    for(int i = 0; i < n; i++) {
        cout << results[i] << endl;
    }

    return 0;
}
