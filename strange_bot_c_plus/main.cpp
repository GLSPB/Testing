#include <iostream>
#include <string>
// был пропущен служебный знак #
using namespace std;

/**
 * Example demonstrated using strings in C++ manner.
 * @brief main
 * @return
 */
main() { 
 // main это функция, а не переменная
    string botName = "Your Brains";
// прописан лишний знак ":"
    string userName, dayOfWeek;

    cout << "Hello. I am " << botName << endl;
    cout << "What is your name?" << endl;
	// в строках 17,18 пропущенн служебный хнак ";"
    getline(cin, userName);
	// не правельный знак ";"
    cout << "Hello " << userName << endl;
    cout << "What is weekday now?" << endl;
	// в строках 22,23 пропущенн служебный хнак ";"
    getline(cin, dayOfWeek);
    if (dayOfWeek == "monday") {
	//недописан знак "="
        cout << "Sunday is so far away!\n";
    }
    else if (dayOfWeek == "friday") {
	//недописан знак "="
        cout << "Hurraaa!\n";
    }
    else {
        cout << "Working day ... Hrr\n";
    }
    return 0;
	//допущенна орфографическая ошибка в слове "return"
}
