cmake_minimum_required(VERSION 3.10) # 必要なCMakeの最小バージョン
project(tdd_cpp VERSION 1.0) # プロジェクト名とバージョン指定

# C++の標準を設定
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)


# Windowsの場合のみ、DLLバージョンのランタイムライブラリを強制する
if(WIN32)
    set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
endif()

# サブディレクトリを追加
add_subdirectory(src)
add_subdirectory(tests)



