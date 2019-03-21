#ifndef _INPUTS_H_
#define _INPUTS_H_

#include "logic.h"

class input: public logic
{
protected:
    bool value;
public:
    input();
    input(bool value);
    void set(bool value);
    bool getOutput();
};


#endif
