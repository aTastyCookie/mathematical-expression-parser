#include <iostream>
#include "TCALC.h"

int main() {
    TCALC CALC;
    char expr[255];
    cout << "Курсовая работа Ананьева Романа КМБ-1-11" << endl;
    cout << "Была допилена Трипольским Петром, пока что из ПИ19-1" << endl;
    cout << "( чистка кода, порт под python ) " << endl;
    cout << "Введите выражение" << endl;
    cout << "" << endl;
    while (1) {
        cout << ">>  ";
        cin.getline(expr, 255);
        try {
            CALC.Compile(expr);
            CALC.Evaluate();
            cout << "Ответ:    " << CALC.GetResult() << endl << endl;
            cout << "" <<endl;
        } catch (const char* msg) {
            cerr << msg << endl;
            continue;
        }
    }
}
