#include "ConMake.h"
#include "HW.h"

bool table(int input);
int init(int* p);

bool table(int input);
int init(int* p);

int sayac = 0;
char a = '1', b = '2', c = '3', d = '4', e = '5', f = '6', g = '7', h = '8', i = '9';
int control[9];
//If unbounded number entered it brokes game bcs of counter (sayac) can be solved in switch case 
//Can be upgraded by adding do you want to play again and creating new tables on sql by it
int main()
{
  
    
    MYSQL * connect;
    connect = mysql_init(0);
    ConMake::mainCon(connect);
    string p1;
    string p2;
    


    init(control);
    int a = 0;

    while (table(a) != true) {
        std::cout << "Please chose your place : ";
        std::cin >> a;
        if(control[a] != 1 ){
            if (sayac % 2 != 0) {
                    p1 = "Insert INTO Game1(Player1)VALUE(" + to_string(a) + ");";                
                    mysql_query(connect, p1.c_str());
                   }
            else {
                    p2 = "Insert INTO Game1(Player2)VALUE(" + to_string(a) + ");";
                    mysql_query(connect, p2.c_str());
    
            }
        }
    }
}

int init(int* p) {
    for (int i = 0; i < 9; i++) {
        *p = 0;
        p++;
    }
    return 0;
};

bool table(int input) {
    int* p = control;
    sayac++;
    switch (input) {
    case 1:
        if (*p == 0) {
            sayac % 2 == 0 ? a = 'X' : a = 'O';
            *p = 1;

        }
        else
            sayac--;

        break;
    case 2:
        if (*(p + 1) == 0) {
            sayac % 2 == 0 ? b = 'X' : b = 'O';
            *(p + 1) = 1;
        }
        else
            sayac--;

        break;
    case 3:
        if (*(p + 2) == 0) {
            sayac % 2 == 0 ? c = 'X' : c = 'O';
            *(p + 2) = 1;
        }
        else
            sayac--;

        break;
    case 4:
        if (*(p + 3) == 0) {
            sayac % 2 == 0 ? d = 'X' : d = 'O';
            *(p + 3) = 1;
        }
        else
            sayac--;

        break;
    case 5:
        if (*(p + 4) == 0) {
            sayac % 2 == 0 ? e = 'X' : e = 'O';
            *(p + 4) = 1;
        }
        else
            sayac--;

        break;
    case 6:
        if (*(p + 5) == 0) {
            sayac % 2 == 0 ? f = 'X' : f = 'O';
            *(p + 5) = 1;
        }
        else
            sayac--;

        break;
    case 7:
        if (*(p + 6) == 0) {
            sayac % 2 == 0 ? g = 'X' : g = 'O';
            *(p + 6) = 1;
        }
        else
            sayac--;

        break;
    case 8:
        if (*(p + 7) == 0) {
            sayac % 2 == 0 ? h = 'X' : h = 'O';
            *(p + 7) = 1;
            break;
        }
        else
            sayac--;

        break;
    case 9:
        if (*(p + 8) == 0) {
            sayac % 2 == 0 ? i = 'X' : i = 'O';
            *(p + 8) = 1;
        }
        else
            sayac--;

        break;
    }

    std::cout << "-------------------------------" << std::endl;
    std::cout << "|     " << "    |     " << "    |     " << "    |" << std::endl;
    std::cout << "|    " << a << "    |    " << b << "    |    " << c << "    |" << std::endl;
    std::cout << "|     " << "    |     " << "    |     " << "    |" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << "|     " << "    |     " << "    |     " << "    |" << std::endl;
    std::cout << "|    " << d << "    |    " << e << "    |    " << f << "    |" << std::endl;
    std::cout << "|     " << "    |     " << "    |     " << "    |" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << "|     " << "    |     " << "    |     " << "    |" << std::endl;
    std::cout << "|    " << g << "    |    " << h << "    |    " << i << "    |" << std::endl;
    std::cout << "|     " << "    |     " << "    |     " << "    |" << std::endl;
    std::cout << "-------------------------------" << std::endl;

    if ((a == b && b == c) || (a == e && e == i) || (a == d && d == g) || (b == e && e == h) || (c == e && e == g) ||
        (c == f && f == i) || (d == e && e == f) || g == h && h == i) {
        sayac % 2 == 0 ? std::cout << "Player 1 won" << std::endl : std::cout << "Player 2 won" << std::endl; // if things go complex we can make this [3][3] array // it does not end the game at draw

        return true;
    }
    return false;
}
