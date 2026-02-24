#pragma once

#include <vector>
#include <bitset>
#include <string>

// N is dimension, normal sudoku is dim 3 -> 3ˆ2 = 9

template <size_t N>
class SudokuCell {
private:	
	int number;
	bool can_change;
	std::bitset<N*N + 1> candidates;
public:
	SudokuCell();
	SudokuCell(int n);
	void toggle_fixed();
	void write(int i);
	int read() const;
	bool is_fixed() const;
	void fill_candidates();
	void clear_candidates();
	void add_candidate(int i);
	void remove_candidate(int i);
	int count_candidates() const;
	std::bitset<N*N + 1> get_candidates() const;
};


template <size_t N>
class Sudoku {
private:
    std::vector<std::vector<SudokuCell<N>>> board;
public:
    Sudoku();
    void set_cell(int row, int col, int val);
    int get_cell(int row, int col) const;
    SudokuCell<N>& get_cell_obj(int row, int col);
	int get_box_index(int row, int col) const;
	bool is_complete() const;
	bool is_valid(int row, int col, int val) const;

	void load_from_string(std::string s);
	std::string export_board();
};

#include "SudokuCell.tpp"
#include "Sudoku.tpp"
