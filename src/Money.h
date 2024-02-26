# pragma once

class Money{
public:
    // コンストラクタ
    explicit Money(int initial_amount) {amount = initial_amount;};
    // メンバ関数
    bool operator==(const Money &other) const { return amount == other.amount; };
    bool operator!=(const Money &other) const { return !(*this == other); };
    Money times(int multiplier) const {return Money(amount * multiplier);};
protected:
    // メンバ変数
    int amount;
};