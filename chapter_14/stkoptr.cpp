#include <iostream>
#include <cstdlib>
#include <ctime>
#include "stacktp1.h"

const int Num = 10;

int main()
{
    std::srand(std::time(0));
    std::cout << "Please enter stack size: ";
    int stacksize = 5;
    // std::cin >> stacksize;
    Stack <const char * > st(stacksize);

    const char * in[Num] = {
        "1: Hank", "2: Kiki",
        "3: Betty", "4: Ian",
        "5: Wolfgang", "6: Portia",
        "7: Joy", "8: Xaverie",
        "9: Juan", "10: Misha"
    };

    const char * out[Num];
    int processed = 0;
    int nextin = 0;
    while (processed < Num)
    {
        if (st.isempty()) {
            st.push(in[nextin++]);
        }
        else if (st.isfull()) {
            st.pop(out[processed++]);
        }
        else if (std::rand() % 2 && nextin < Num) {
            st.push(in[nextin++]);
        }
        else {
            st.pop(out[processed++]);
        }
    }
    for (int i = 0; i < Num; i++) {
        std::cout << out[i] << std::endl;
    }
    std::cout << "Bye\n";
    return 0;

    

    return 0;
}