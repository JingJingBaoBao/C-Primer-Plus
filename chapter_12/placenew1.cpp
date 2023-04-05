#include <iostream>
#include <string>
#include <new>
using namespace std;
const int BUF = 512;
class JustTesting
{
private:
    string words;
    int number;
public:
    JustTesting(const string & s = "Just Testing", int n = 0)
    {
        words = s;
        number = n;
        cout << words <<" constructed\n";
    }
    ~JustTesting()
    {
        cout << words << " destroyed\n";
    }
    void Show() const
    {
        cout << words << ", " << number << endl;
    }
};

int main()
{
    char * buffer = new char[BUF];
    cout <<"buffer : "<< buffer << endl;
    JustTesting *pc1, *pc2;
    //这种方式构造调用的默认构造函数，是把新创建的JT对象放到buffer开辟的内存块里吗？
    pc1 = new (buffer) JustTesting;
    pc2 = new JustTesting("Heap1", 20);
    // 这里pc1应该就等于buffer吧，(void*)buffer代表什么意思呢
    cout << "Memory block address:\n" << "buffer: "
        << (void*)buffer << " heap: " << pc2 << endl;
    cout << &buffer << endl;
    cout << "Memory contents:\n";
    cout << pc1 << " : ";
    pc1->Show();
    cout << pc2 << " : ";
    pc2->Show();
    JustTesting *pc3, *pc4;
    pc3 = new (buffer) JustTesting("Bad Idea", 6);
    pc4 = new JustTesting("Heap2", 10);
    cout << "Memory contents:\n";
    cout << pc3 << " : ";
    pc3->Show();
    cout << pc4 << " : ";
    pc4->Show();
    delete pc2;
    delete pc4;
    delete [] buffer;
    return 0;
}