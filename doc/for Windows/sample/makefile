# CppUTest用makefile
#
# 2021.08.12: Mac用ファイルをもとに作成

# 最終的な生成ターゲット(必要ならば置き換え)
TARGET = utest.exe

# CppUTest用ヘッダやライブラリ
# 環境変数 CPPUTEST_HOME に CppUTest をインストールしたフォルダ名が定義されてい
# るものとしている。
CPPUTEST_LIB = -L"$(CPPUTEST_HOME)/lib" -lCppUTest -lCppUTestExt
CPPUTEST_INC = -I"$(CPPUTEST_HOME)/include"

# 追加インクルードパス
INC = 

# 最終的なオブジェクト
# ★適当なファイル名に置き換える。
OBJ = hello.o testMain.o testDriver.o
DEP = hello.d

# デフォルトルールを変更
# ※makeのデフォルトルールを表示するには makefile が無いフォルダで以下を実行。
#   make -p
%.d: %.c
	$(call make-dependency,gcc,$(INC))
%.o: %.c
	gcc -Wall -std=c99 -o $@ -c $<
%.o: %.cpp
	g++ -Wall $(CPPUTEST_INC) -o $@ -c $<

# 依存関係ファイルを作る関数
# 必要なコマンドとして sed, rm, そして gnu gcc の -MM オプション
# 使用方法: $(call make-dependency,cc,ccflag)
define make-dependency
  # Create $@
  @$1 -MM $2 $< >$@.$$$$ ;\
  sed 's,\($*\).o[ :]*,\1.o $@: ,' <$@.$$$$ >$@;\
  rm -f $@.$$$$
endef

.PHONY: all clean

all: $(TARGET)
	# Execute Unit Test
	./$<

# リンクは g++ を使用しないとundefがでる。
$(TARGET): $(OBJ)
	g++ -o $@ $^ $(CPPUTEST_LIB)

-include $(DEP)

clean:
	rm -f $(TARGET) $(OBJ) $(DEP)
