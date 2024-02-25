# srcをインクルードパスに追加
include_directories(${CMAKE_SOURCE_DIR}/src)

# Google Testを探す
add_subdirectory(${CMAKE_SOURCE_DIR}/external/googletest))
enable_testing()

# テスト実行ファイルを追加
add_executable(runTests 
    test_main.cpp 
    MoneyTest.cpp
)

# テスト実行ファイルにリンク
target_link_libraries(runTests     
    gtest_main # google tests
    dollar_lib
    pthread
)

include(GoogleTest)
gtest_discover_tests(runTests)