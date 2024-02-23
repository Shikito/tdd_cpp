#include <gtest/gtest.h>

//  TESTマクロ（新しいテストケースを定義する）
//  第一引数：テストケースの名前:SampleTest
//  第二引数：テスト名です。
TEST(SampleTest, AssertionTrue) {
    // ASSERT_TRUEマクロ（特定の条件が真（true)であることを検証する
    ASSERT_TRUE(true); // このテストは常に成功する。

    // ASSERT_*マクロやEXPECT_*マクロがある。
    // 異なる種類の条件を検証するために使用できる。
}

int main(int argc, char **argv){
    // テスト環境を初期化する
    // コマンドライン引数を解析して，特定のテストの実行やテストのリストアップ
    // などのオプションを処理する。
    ::testing::InitGoogleTest(&argc, argv);

    // すべてのテストケースを実行し，成功したテストと
    // 失敗したテストの数に基づいて終了コードを返す。
    // この関数の返り値をmain関数から返すことで、
    // テストプログラムの実行結果をシェルに伝えることができます。
    return RUN_ALL_TESTS();
}