#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main() {

    ifstream file("myFile.txt");
    string line;
    int lineNo = 1;

    while (getline(file, line)) {

        stringstream ss(line);
        string word;

        cout << "Line " << lineNo << ": ";

        while (ss >> word) {

            cout << endl;

            // keyword
            if (word == "int" || word == "float"  || word == "bool" || word == "string" || word == "char" || word == "true" || word == "false" || word == "return" ||
                word == "break" || word == "continue" || word == "using" || word == "namespace" || word == "std" || word == "cin" || word == "cout") {
                cout << word << " is a keyword";
            }

            // punctuation
            else if (word == "(" || word == ")" || word == "{" || word == "}" || word == "[" || word == "]" || word == ";" || word == ",") {
                cout << word << " is a punctuation";
            }

            // operator
            else if (word == "=" || word == "+" || word == "-" || word == "*" || word == "/" || word == "<" || word == ">" || word == "<<" || word == ">>") {
                cout << word << " is a operator";
            }

            // constant
            else if (word[0] >= '0' && word[0] <= '9'|| word[0] == '"' || word[0] == '\'') {
                cout << word << " is a constant";
            }

            // identifier
            else {
                cout << word << " is a identifier";
            }
        }

        cout << endl << endl;
        lineNo++;
    }

    file.close();
    return 0;
}
