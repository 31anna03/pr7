// Створити чергу символів. Визначити чи є у черзі слово ‘студент’.//

#include<iostream>
#include<queue>
#include<string>
#include<windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    queue<string> studentQueue;
    string word = "студент";  

    studentQueue.push("стипендія");
    studentQueue.push("структура");
    studentQueue.push("студент");
    studentQueue.push("студія");
    studentQueue.push("стуетн");
    studentQueue.push("статуя");

    bool found = false;
    while (!studentQueue.empty()) {
        if (studentQueue.front() == word) {
            found = true;
            break;
        }
        studentQueue.pop();  
    }

    if (found) {
        cout << "Слово 'студент' знайдено у черзі." << endl;
    }
    else {
        cout << "Слово 'студент' не знайдено у черзі." << endl;
    }

    return 0;
}

