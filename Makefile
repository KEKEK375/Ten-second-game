# Directory declaration
BUILD_DIR = _build
SOURCE_DIR = src

# Target declaration
TARGET = $(BUILD_DIR)/$(SOURCE_DIR)/main

all: clean build install run

clean:
	 @echo "cleaning build directory..."
	 @rm -rf $(BUILD_DIR)

build:
	 @echo "building executables..."
	 @cmake -S . -B $(BUILD_DIR)

install: build
	 @echo "installing executables..."
	 @cmake --build $(BUILD_DIR)

run: install
	 @echo "running executables..."
	 @./$(TARGET)

