#include <iostream>
using namespace std;
 
int main() {

const int SIZE = 10; 
int data[SIZE] = {7, 12, 5, 12, 40, 3, 12, 8, 21, 5};
int targetNumber = 0;

int foundIndex = -1;

int count = 0;

cout << "Enter Target Number: "; 
cin >> targetNumber; 

for(int i = 0; i < SIZE; i++){

    if (targetNumber == data[i]){
        
        if (foundIndex == -1){
            foundIndex = i;
        }
        
        count++;
        
    }
}

if (foundIndex != -1) {

    cout << targetNumber << " first found at index " << foundIndex << endl;
    cout << targetNumber << " appeared " << count << " time(s)" << endl << endl;

}
else {
    cout << targetNumber << " was not found." << endl;
}

return 0;

}
