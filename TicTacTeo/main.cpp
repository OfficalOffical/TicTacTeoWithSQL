#include <iostream>

int sayac = 0;
char a = '1', b = '2', c = '3', d = '4', e = '5', f = '6', g = '7', h = '8', i = '9';

bool table(int input) {
        sayac++;
        switch (input) {
            case 1:
                sayac % 2 == 0 ? a = 'X' : a = 'O';
                break;
            case 2:
                sayac % 2 == 0 ? b = 'X' : b = 'O';
 2 == 0 ? h = 'X' : h = 'O';
                break;
            case 9:
                sayac % 2 == 0 ? i = 'X' : i = 'O';
                break;
        }

        std::cout << "-------------------------------" << std::endl;
        std::cout << "|     " << "    |     " << "    |     " << "    |" << std::endl;
        std::cout << "|    " << a << "    |    " << b << "    |    " << c << "    |" << std::endl;
        std::cout << "|     " << "    |     " << "    |     " << "    |" << std::endl;
        std::cout << "-------------------------------" << std::endl;
        std::cout << "|     " << "    |     " << "    |     " << "    |" << std::endl;

}


int main() {
    int a;
    while(table(a)!= true){
        std::cout<<"Please chose your place : ";
        std::cin>>a;
    }
    // To prove i can add 1-9 limit to while loop
    // I can add != X && != O in switch case
}
