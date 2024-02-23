# Google Testを探す
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# テスト実行ファイルを追加
add_executable(runTests test_main.cpp)

# テスト実行ファイルにリンク
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)