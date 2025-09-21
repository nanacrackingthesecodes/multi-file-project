#include <iostream>
#include <cstring>
using namespace std;

class Laptop {
    char *model;
    char *color;
    double price;

public:
    Laptop(const char *m, const char *c, double a);
    void Print() const;
    ~Laptop();
};
