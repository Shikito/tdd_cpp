#ifndef DOLLAR_H
#define DOLLAR_H

class Dollar{
public:  
    //コンストラクタ
    Dollar(int initial_amount);
    int amount;

    //メンバ関数
    Dollar times(int multiplier);
    bool equals(Dollar other);
};
#endif
