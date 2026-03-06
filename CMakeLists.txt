cmake_minimum_required(VERSION 3.16)
project(linkedList LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 1. Создаём статическую библиотеку из файла linkedlist.cpp
add_library(LinkedListLib STATIC linkedlist.cpp)
# Добавляем заголовок для видимости в IDE (необязательно)
target_sources(LinkedListLib PRIVATE linkedlist.h)
# Указываем, что заголовки библиотеки находятся в текущей папке
target_include_directories(LinkedListLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# 2. Создаём основное приложение (исполняемый файл)
add_executable(linkedList main.cpp)
# Линкуем его с нашей библиотекой
target_link_libraries(linkedList PRIVATE LinkedListLib)

# 3. Подключаем тесты (папка tests)
add_subdirectory(tests)

# Опционально: установка
include(GNUInstallDirs)
install(TARGETS linkedList LinkedListLib
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
