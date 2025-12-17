#include <iostream>
#include <vector>
using namespace std;


vector<float> analyzeMarks(int marks[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += marks[i];
    }
    float average = total / (float)size;

    vector<float> result;
    result.push_back(total);
    result.push_back(average);
    return result;
}

int main() {
    int marks[5];
    cout << "Enter marks of 5 subjects: ";
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
    }

    vector<float> output = analyzeMarks(marks, 5);

    cout << "Total Marks: " << output[0] << endl;
    cout << "Average Marks: " << output[1] << endl;

    return 0;
}