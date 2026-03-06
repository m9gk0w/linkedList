include(FetchContent)

FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.12.1
)

option(BUILD_GMOCK OFF)
FetchContent_MakeAvailable(googletest)

# Исполняемый файл тестов (имя файла должно совпадать с реальным)
add_executable(tests test_linkedlist.cpp)

# Линкуем с нашей библиотекой LinkedListLib и GTest
target_link_libraries(tests PRIVATE
    LinkedListLib
    GTest::gtest_main
)

# Указываем путь к заголовкам (хотя они уже передаются через LinkedListLib,
# но на всякий случай можно оставить)
target_include_directories(tests PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/..
)

include(GoogleTest)
gtest_discover_tests(tests)
