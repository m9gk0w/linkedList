#include <gtest/gtest.h>
#include "linkedlist.h"

// Тест 1: При создании список пуст
TEST(LinkedListTest, InitiallyEmpty) {
    linkedlist list;
    EXPECT_EQ(list.size, 0);               // проверяем, что размер 0
    EXPECT_TRUE(list.toVector().empty());  // и вектор пуст
}

// Тест 2: push_back добавляет элементы в конец
TEST(LinkedListTest, PushBackAddsElements) {
    linkedlist list;
    list.push_back(10);
    list.push_back(20);
    list.push_back(30);

    EXPECT_EQ(list.size, 3);  // размер увеличился

    std::vector<int> expected = {10, 20, 30};
    EXPECT_EQ(list.toVector(), expected);  // значения совпадают
}

// Тест 3: метод print не изменяет состояние и не вызывает сбоев
TEST(LinkedListTest, PrintDoesNotCrash) {
    linkedlist list;
    list.push_back(5);
    list.push_back(15);

    // Сохраняем состояние до вызова print
    auto before = list.toVector();

    // Вызываем print — если он упадёт, тест провалится
    list.print();

    // Проверяем, что состояние осталось неизменным
    EXPECT_EQ(list.toVector(), before);
}
