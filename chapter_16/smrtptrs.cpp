#include <iostream>
#include <string>
#include <memory>

class Report
{
private:
    std::string str;
public:
    Report(const std::string s) : str(s) {std::cout << "created" << std::endl;}
    ~Report() {std::cout << "Finished" << std::endl;}
    void comment() const {std::cout << str << std::endl;}
};

int main()
{
    // {
    //     std::auto_ptr<Report> ps (new Report("using auto ptr"));
    // }
    {
        std::shared_ptr<Report> ps (new Report("using shared ptr"));
        ps->comment();
    }
    {
        std::unique_ptr<Report> ps (new Report("using unique ptr"));
        ps->comment();
    }

    return 0;
}