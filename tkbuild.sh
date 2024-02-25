#!/bin/bash

# ビルドディレクトリの設定
BUILD_DIR="build"

# ビルドディレクトリがなければ作成
if [ ! -d "$BUILD_DIR" ]; then
  mkdir $BUILD_DIR
fi

# ビルドディレクトリに移動
cd $BUILD_DIR

# CMakeを使ってプロジェクトをコンフィグレーション
cmake -DCMAKE_CXX_COMPILER=g++ -DCMAKE_C_COMPILER=gcc -DCMAKE_BUILD_TYPE=Release ..

# プロジェクトのビルド
cmake --build . --config Release

# テストの実行
# ctest --build-config Release
./tests/runTests

# 元のディレクトリに戻る
cd -
