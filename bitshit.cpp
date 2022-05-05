#include <iostream>
#include <windows.h>   
#include <stdlib.h>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;  


int printcolor(const char* message, int color) { // <-- Colors
    HANDLE  clrCons;
    clrCons = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(clrCons, color);
    cout << message;
        return 0;
}


string RandomString(int len)
{
    string str = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    string newstr;
    int pos;
    while (newstr.size() != len) {
        pos = ((rand() % (str.size() - 1)));
        newstr += str.substr(pos, 1);
    }
    return newstr;
}

string RandomNumber(int leng)
{
    string str = "01234567";
    string newstr;
    int pos;
    while (newstr.size() != leng) {
        pos = ((rand() % (str.size() - 1)));
        newstr += str.substr(pos, 1);
    }
    return newstr;
}


int main()
{   
    int num;
    int k;
    int qst;
    int l;
    string yn;

    system("title Fake Miner");
    printcolor("[WALLET MINER] Choose Number: \n", 4);
    cout << "\n 1. Mine BTC Wallets \n 2. Check your balance \n 3. Exit \n";
    cin >> num;

    if (num > 0) {
        if (num == 1) {
            system("cls");

            for (k = 151920; k < 5132132123; k++) {
                Sleep(50);
                printcolor("[", 4); cout << k << "]" << RandomString(40); printcolor("  --> 0.00000 BTC \n", 1);

                if (k == 151987) { //51987
                    cout << "\n";
                    printcolor("[", 2); cout << k << "]" << RandomString(40); printcolor("  --> 0.00", 2); cout << RandomNumber(3) << "BTC \n";

                    Sleep(1000);
                    cout << "\n 1. Mining Results \n 2. Continue Mining \n 3. Instant Withdraw \n \n";
                    cin >> qst;

                    if (qst > 0 && qst != 0) {

                        cout << "\n";
                        if (qst == 1) {
                            cout << "\aYou was mining " << RandomNumber(1) + "h" << RandomNumber(2) + "m";
                        }

                        if (qst == 2) {
                            continue;
                        }

                        if (qst == 3) {
                            for (l = 0; l < 4; l++)
                            {
                                system("cls");
                                printcolor("Loading.", 1);
                                Sleep(700);
                                system("cls");

                                printcolor("Loading..", 1);
                                Sleep(700);
                                system("cls");

                                printcolor("Loading...", 1);
                                Sleep(700);


                            }
                            system("cls");

                            printcolor("Money sucesfully withdraw! \n", 6);

                            printcolor("Do You want to Continue? (Y/N): ", 2);
                            cin >> yn;

                            if (yn == "Y" || yn == "y") {
                                continue;
                            }
                            else {
                                return EXIT_SUCCESS;
                            }
                        }
                    }
                    break;
                }


            }
        }

        if (num == 2) {
            system("cls");
            cout << "You dont have balance or your wallet isnt connected!";
        }
        if (num == 3) {
            return EXIT_SUCCESS;
        }
    }

    int a;
    cin >> a;

    return 0;
}