add_library(dollar_lib
    Dollar.cpp
)

add_library(franc_lib
    Dollar.cpp
)

# main.cppというファイルをもとに、
# tdd_cpp_appという実行可能ファイルを作成する。
add_executable(tdd_cpp_app
    main.cpp
)

# dollar_lib ライブラリを tdd_cpp_app 実行ファイルにリンク
target_link_libraries(tdd_cpp_app
    dollar_lib
    franc_lib
)