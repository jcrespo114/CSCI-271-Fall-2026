#include <iostream> // ASSIGNMENT 7
using namespace std;



int main() {

    const int SIZE = 8; 
    int list[SIZE] = {11,22,33,44,55,66,77,88};
    int mid;
    int low = 0; 
    int high = SIZE - 1;
    int foundIndex = -1; 
    int targetnumber; 
   
    
    
    cout << "Enter a number to search for: "; 
    cin >> targetnumber; 

        while (low <= high){ // while statement to declare mid and then go into the if,
            mid = (low + high) / 2;
            if (list[mid] == targetnumber) { // if targetnumber is equal to a number on array then
                foundIndex = mid; break; 
            } else if (list[mid] < targetnumber) { // if array number array is less that targetnumber SEARCH
                low = mid + 1;

            } else { // if array number is greater than targetnumber SEARCH 
                high = mid - 1;
            }
        }

        if (foundIndex == -1){ // if foundIndex is = -1, then it was not found and .
            cout << targetnumber << " Not Found. ";
        } else { // else statement moving to show targetnumber found at index x. 
            cout << targetnumber << " found at index " << foundIndex << "";
        }

        
























    return 0;
}