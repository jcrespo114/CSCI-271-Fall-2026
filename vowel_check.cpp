#include <iostream>
#include <string>
using namespace std;

int main() {


string sentence;
int vowels = 0;

cout << "Enter a sentence: ";
getline(cin, sentence);

for (char letter : sentence) {
    
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' ||
        letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') 
        vowels++;
}

    cout << "Vowels: " << vowels;













    return 0; 
}