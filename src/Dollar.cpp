#include "Dollar.h"

Dollar::Dollar(int initial_amount){
    amount = initial_amount;
};

void Dollar::times(int multiplier){
    amount *= multiplier;
};