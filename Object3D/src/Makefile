CC := gcc
CFLAGS := -Wall -Werror -Wextra -std=c++17
LDFLAGS :=

BUILD_DIR := ../build
NAME_TASK := 3DViewer

MODEL_DIR := model
MODEL_SRC := $(wildcard $(MODEL_DIR)/*.cc)
MODEL_OBJ := $(patsubst %.cc,%.o,$(MODEL_SRC))

OS := $(shell uname -s)

ifeq ($(OS),Linux)
	LDFLAGS += -lstdc++ -pthread -lrt -lm
	APP_FILE := 3DViewer
	OPEN_CMD := xdg-open
else ifeq ($(OS),Darwin)
	LDFLAGS += -lstdc++ -lm
	APP_FILE := 3DViewer.app
	OPEN_CMD := open
endif

all: clean install

install:
	@echo "┏=============================┓"
	@echo "┃    Start installation...    ┃"
	@echo "┗=============================┛"
	@mkdir -p $(BUILD_DIR)
	@qmake6 -o $(BUILD_DIR)/Makefile view/3DViewer.pro
	@make -C $(BUILD_DIR)
	@make -C $(BUILD_DIR) clean
	@rm -rf $(BUILD_DIR)/.qmake.stash $(BUILD_DIR)/Makefile
	@echo "┏=================================================┓"
	@echo "┃        The installation was successful.         ┃"
	@echo "┃    The executable file is located in build.     ┃"
	@echo "┗=================================================┛"

uninstall:
	@echo "┏=================================┓"
	@echo "┃    Uninstalling a program...    ┃"
	@echo "┗=================================┛"
	@rm -rf $(BUILD_DIR)

clean:
	@echo "┏===============================┓"
	@echo "┃  Deleting temporary files...  ┃"
	@echo "┗===============================┛"
	@rm -rf $(TEST_EXEC)
	@rm -rf report

.PHONY: all install uninstall clean
