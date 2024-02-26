#pragma once

class Franc{
public:  
    //コンストラクタ
    explicit Franc(int initial_amount) : amount{initial_amount}{};
    //メンバ関数
    Franc times(int multiplier) const {return Franc(amount * multiplier);};
    bool operator==(const Franc &other) const { return amount == other.amount; };
    bool operator!=(const Franc &other) const { return !(*this == other); };
private:
    //メンバ変数
    int amount;
};
