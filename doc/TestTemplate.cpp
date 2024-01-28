// @file    TestTemplate.cpp
// @brief   汎用テストドライバ
// @date    2024.01.28
#include    <CppUTest/TestHarness.h>
// C++で使用するヘッダファイルをここへ(もしあれば)
//
extern "C"
{
// Cで使用するヘッダファイルをここで #include する。
}

// 以下の TestGroup は適当な名称に変更可能。
// ただし、下と合わせる。
TEST_GROUP(TestGroup)
{
    // ここに本テストグループが使用するデータを定義
    void setup()
    {
        // 各テストの前に実行したい初期化処理
    }
    void teardown()
    {
        // 各テストの後に実行したい後片付け
    }
};

// テストファイルには以下のようなテストケースを複数定義可能。
// TestCase は適当な名称に変更する。
TEST(TestGroup, TestCase)
{
    // ここにテストコードを書く。
}
// 必要ならば、この後にテストを続ける。

// テストはファイルへの記述順に行われない点に注意！
// 唯一順番が守られるのはsetupとteardownのみである。
