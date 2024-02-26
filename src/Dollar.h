#pragma once
#include "Money.h"

class Dollar : public Money {
public:  
    //コンストラクタ
    explicit Dollar(int initial_amount) : Money{initial_amount} {};
};