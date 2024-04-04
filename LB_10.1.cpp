#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

using namespace std;


int countOccurrences(const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Не вдалося відкрити файл: " << filename << endl;
        return -1;
    }

    string line;
    int count = 0;
    while (getline(file, line)) {
        size_t pos = 0;
        while ((pos = line.find("abc", pos)) != string::npos) {
            count++;
            pos += 3;
        }
    }
    file.close();
    return count;
}

int main() {
    SetConsoleOutputCP(1251);
    string filename = "test.txt";
    int count = countOccurrences(filename);
    if (count != -1) {
        cout << "Число входжень 'abc' у файлі " << filename << " становить " << count << endl;
    }
    return 0;
}
