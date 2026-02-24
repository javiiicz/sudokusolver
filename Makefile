# Compiler and flags
CXX      := clang++
CXXFLAGS := -Wall -Wextra -std=c++17 -O3
TARGET   := SudokuSolver

# Files
SRCS     := main.cpp
# List your headers and templates as dependencies
DEPS     := Sudoku.hpp SudokuCell.tpp Sudoku.tpp

# Default rule
all: $(TARGET)

# Link and compile
$(TARGET): $(SRCS) $(DEPS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)

# Utility to clean build artifacts
clean:
	rm -f $(TARGET)

.PHONY: all clean
