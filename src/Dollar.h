#ifndef DOLLAR_H
#define DOLLAR_H

class Dollar{
public:  
    //コンストラクタ
    explicit Dollar(int initial_amount) : amount(initial_amount){};
    //メンバ関数
    Dollar times(int multiplier) {return Dollar(amount * multiplier);};
    bool operator==(const Dollar &other) const { return amount == other.amount; };
    bool operator!=(const Dollar &other) const { return !(*this == other); };
private:
    int amount;
};
#endif
