#include "Dollar.h"

Dollar::Dollar(int initial_amount){
    amount = initial_amount;
};

Dollar Dollar::times(int multiplier){
    return Dollar(amount * multiplier);
};