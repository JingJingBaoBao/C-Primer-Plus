#include <iostream>
#include <string>
#include <cctype>
#include "stacktp.h"

using std::cout;
using std::cin;

int main()
{
    Stack<std::string> st;
    char ch;
    std::string po;
    cout << "A P Q:\n";
    while (cin >> ch && std::toupper(ch) != 'Q') {
        while (cin.get() != '\n')
        {
            continue;
        }

        if (!std::isalpha(ch)) {
            cout << "\a";
            continue;
        }
        switch (ch)
        {
        case 'A':
        case 'a': cout << "add: ";
                  cin >> po;
                  if (st.isfull()) {
                    cout << "full\n";
                  }
                  else {
                    st.push(po);
                  }
            break;
        
        case 'P':
        case 'p': if (st.isempty()) {
                    cout << "empty\n";
                }
                else {
                    st.pop(po);
                    cout << "PO #" << po << std::endl;
                    break;
                }
        }
        cout << "P A Q: \n";
        
    }
    cout <<"Gone" << std::endl;
    return 0;
}
