#include <iostream>
#include <new>

const int BUF = 512;
const int N = 5;
char buffer[BUF];
int main()
{
    double *pd1, *pd2;
    int i;
    std::cout << "Calling new ands placement new:\n";
    pd1 = new double[N];
    pd2 = new (buffer) double[N];
    for (int i = 0; i < N; i++) {
        pd2[i] = pd1[i] = 1000 + 20 * i;
    }
    std::cout << "Memory addresses:\n" << " heap: " << pd1
              << " Static: " << (void *) buffer << std::endl;
    std::cout << "Memory contents:\n";

}