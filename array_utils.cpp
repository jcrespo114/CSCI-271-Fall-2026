#include <iostream>
using namespace std;


int main() {

    const int SIZE = 6;
    int values[SIZE] = {14, 3, 27, 9, 50, 21};

    void printForward(const int arr[], int size){
        cout << "Forward: ";
        for (int i = 0; i < size; i++){
            cout << arr[i] << " ";
        }
    }

    void printReverse(const int arr[], int size){
        cout << "Reverse: ";
        for (int i = size - 1; i >= 0; i--){
            cout << arr[i] << " ";
        }
    }

    int limit = 0;
    cout << "Count values above: ";
    cin >> limit;

    int countAbove(const int arr[], int size, int limit){
        int ctr = 0;
        for (int i = 0; i < size; i++){
            if (limit > arr[i]){
                ctr++;
            }
        }
        return ctr;
    }

    return 0;
}