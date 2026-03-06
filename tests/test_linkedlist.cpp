#include <gtest/gtest.h>
#include "linkedlist.h"

// Тест 1: При создании список пуст
TEST(LinkedListTest, InitiallyEmpty) {
    linkedlist list;
    EXPECT_EQ(list.size(), 0);
    EXPECT_TRUE(list.toVector().empty());
}

// Тест 2: push_back добавляет элементы в конец
TEST(LinkedListTest, PushBackAddsElements) {
    linkedlist list;
    list.push_back(10);
    list.push_back(20);
    list.push_back(30);

    EXPECT_EQ(list.size(), 3);

    std::vector<int> expected = {10, 20, 30};
    EXPECT_EQ(list.toVector(), expected);
}

TEST(LinkedListTest, PrintDoesNotCrash) {
    linkedlist list;
    list.push_back(5);
    list.push_back(15);

    auto before = list.toVector();

    list.print();

    EXPECT_EQ(list.toVector(), before);
}
TEST(LinkedListTest, PopBackDelElements) {
    linkedlist list;
    list.push_back(10);
    list.push_back(20);
    list.push_back(30);
    list.pop_back();
    EXPECT_EQ(list.size(), 2);
    std::vector<int> expected = {10, 20};
    EXPECT_EQ(list.toVector(), expected);
}
