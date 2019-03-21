#include "inputs.h"

input::input(){
    value = false;
}

input::input(bool value){
    this->value = value;
}

bool input::getOutput(){
    return value;
}

void input::set(bool value){
    this->value = value;
}
