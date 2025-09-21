#include "Laptop.h"

Laptop::Laptop(const char *m, const char *c, double a) {
    model = new char[strlen(m) + 1];
    strcpy(model, m);

    color = new char[strlen(c) + 1];
    strcpy(color, c);

    price = a;
}

void Laptop::Print() const {
    cout << "Model: " << model
         << "\tColor: " << color
         << "\tPrice: " << price << endl;
}

Laptop::~Laptop() {
    cout << "Destructor called for " << model << endl;
    delete[] model;
    delete[] color;
}
