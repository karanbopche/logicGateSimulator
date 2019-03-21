#include "gates.h"

gate::gate(int inputSize){
    numberOfInputs = inputSize;
    populatedInputs = 0;
    inputs = new logic*[inputSize];
}

gate::~gate(){
    delete[] inputs;
}

bool gate::addInput(logic *in){
    if(numberOfInputs <= populatedInputs)
        return false;
    inputs[populatedInputs] = in;
    populatedInputs++;
    return true;
}

notGate::notGate() : gate(1)    {}

bool notGate::getOutput(){
    if(numberOfInputs != populatedInputs)   // all inputs are not initialized....
        return false;
    return ! inputs[0]->getOutput();
}

andGate::andGate(int inputSize) : gate(inputSize)   {}

bool andGate::getOutput(){
    bool ret = true;
    if(numberOfInputs != populatedInputs)
        return false;
    for(int i=0;i<populatedInputs;i++)
        ret &= inputs[i]->getOutput();
    return ret;
}


orGate::orGate(int inputSize) : gate(inputSize)   {}

bool orGate::getOutput(){
    bool ret = false;
    if(numberOfInputs != populatedInputs)
        return false;
    for(int i=0;i<populatedInputs;i++)
        ret |= inputs[i]->getOutput();
    return ret;
}

norGate::norGate(int inputSize) : gate(inputSize)   {}

bool norGate::getOutput(){
    bool ret = false;
    if(numberOfInputs != populatedInputs)
        return false;
    for(int i=0;i<populatedInputs;i++)
        ret |= inputs[i]->getOutput();
    return !ret;
}

nandGate::nandGate(int inputSize) : gate(inputSize)   {}

bool nandGate::getOutput(){
    bool ret = true;
    if(numberOfInputs != populatedInputs)
        return false;
    for(int i=0;i<populatedInputs;i++)
        ret &= inputs[i]->getOutput();
    return !ret;
}
