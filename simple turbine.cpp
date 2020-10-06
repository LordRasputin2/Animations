#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    /*ios_base::sync_with_stdio(false);
    cin.tie(NULL);*/

    for (;;) {
        Sleep(100);
        system("cls");
        cout << " \\ \n";
        cout << "  o\n";
        cout << "   \\\n";

        Sleep(100);
        system("cls");
        cout << "  |\n";
        cout << "  o\n";
        cout << "  |\n";

        Sleep(100);
        system("cls");
        cout << "   /\n";
        cout << "  o\n";
        cout << " /\n";

        Sleep(100);
        system("cls");
        cout << "\n--o--\n\n";
    }

    return 0;
}
