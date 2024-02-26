#ifndef DOLLAR_H
#define DOLLAR_H

class Dollar{
public:  
    Dollar(int initial_amount);
    int amount;
    Dollar times(int multiplier);
};
#endif
