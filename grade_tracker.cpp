#include <iostream> // ASSIGNMENT 7
#include <vector> 
using namespace std;



int main() {

    vector<int> grades; // stating vector 

    int totalgrades; // declarations
    int grade;
    int highest; 
    int total = 0;

    cout << "How many grades? ";
    cin >> totalgrades; 

    for (int i = 0; i < totalgrades; i++){ // for statement loop just adding grades using pushback into vector 
        cout << "Enter grade: ";
        cin >> grade; 

        grades.push_back(grade);
    }

    cout << "\nGrades; ";

    for (int g : grades) { // display g for grades 
        cout << g << " "; 
    }

    highest = grades[0]; // stating highest is something, that something will be compared in for statemnt 

    for (int g : grades) { // for statement adding up values 
        total = total + g;

        if (g > highest) { // if g is greater than highest (wich is set to grades[0], then new highest value set or not)
            highest = g;
        }
    }

    cout << "\nCount: " << grades.size();

    cout << "\nAverage: " << static_cast<double>(total) / grades.size(); 

    cout << "\nHighest Grade: " << highest; 























return 0;
}