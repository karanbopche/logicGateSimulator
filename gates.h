#ifndef _GATES_H_
#define _GATES_H_

#include "logic.h"

class gate: public logic {
protected:
    logic **inputs;         // array of pointers to input gates.....
    const char *name;       // name/ID of the gate....
    int numberOfInputs;     // store number of inputs for gates..
    int populatedInputs;    // contains how many inputs are assigned...
public:
    gate(int inputSize);
    virtual ~gate();
    bool addInput(logic *in);
//  bool removeInput(logic *in);
};

class notGate : public gate
{
public:
    notGate();
    bool getOutput();
};


class andGate : public gate
{
public:
    andGate(int inputSize);
    bool getOutput();
};

class orGate : public gate
{
public:
    orGate(int inputSize);
    bool getOutput();
};

class nandGate : public gate
{
public:
    nandGate(int inputSize);
    bool getOutput();
};

class norGate : public gate
{
public:
    norGate(int inputSize);
    bool getoutput();
};


#endif
