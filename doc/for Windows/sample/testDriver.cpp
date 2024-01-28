// @file    testDriver.cpp
// @brief   汎用テストドライバ
// @date    2017.08.24
extern "C"
{
    // Cで使用するヘッダファイルをここへ(もしあれば)
    // ★適当なヘッダファイルに置き換える。
#include    "hello.h"
}
// C++で使用するヘッダファイルをここへ(もしあれば)
#include    <CppUTest/TestHarness.h>

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

// テストファイルには以下のようなテストケースを複数定義可能
// ★適当なテストプログラムに置き換える。
TEST(TestGroup, HelloWorld)
{
    Hello("world");
    STRCMP_EQUAL(Say(), "Hello, world!");
}
// ★必要ならば、この後にテストを続ける。

// テストはファイルへの記述順に行われない点に注意！
// 唯一順番が守られるのはsetupとteardownのみである。
