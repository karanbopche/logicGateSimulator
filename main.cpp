#include <iostream>
#include "gates.h"
#include "inputs.h"

using namespace std;

int main() {
    input a, b, c;

    andGate A0(2), A1(2), A2(2);
    orGate Or(3);

    Or.addInput(&A0);
    Or.addInput(&A1);
    Or.addInput(&A2);

    A0.addInput(&a);
    A0.addInput(&b);
    A1.addInput(&b);
    A1.addInput(&c);
    A2.addInput(&c);
    A2.addInput(&a);

    a.set(true);
    b.set(false);
    c.set(true);

    cout<<"output: "<<Or.getOutput()<<endl;

    return 0;
}
