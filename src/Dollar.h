#pragma once

class Dollar{
public:  
    //コンストラクタ
    explicit Dollar(int initial_amount) : amount{initial_amount}{};
    //メンバ関数
    Dollar times(int multiplier) const {return Dollar(amount * multiplier);};
    bool operator==(const Dollar &other) const { return amount == other.amount; };
    bool operator!=(const Dollar &other) const { return !(*this == other); };
private:
    //メンバ変数
    int amount;
};