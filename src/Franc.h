#pragma once
#include "Money.h"

class Franc : public Money{
public:  
    //コンストラクタ
    explicit Franc(int initial_amount) : Money{initial_amount} {};
};
