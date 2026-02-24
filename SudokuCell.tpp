#pragma once

#include <bitset>

//private:
//	int number;
//	bool can_change;
//	std::bitset<N*N + 1> candidates;

// creates an empty cell with all candidates
template <size_t N>
SudokuCell<N>::SudokuCell() : number(0), can_change(true) 
{
	candidates.set();
}

// initialize cell with n
template <size_t N>
SudokuCell<N>::SudokuCell(int n) : number(n), can_change(true)
{
	candidates.set(n);
}

template <size_t N>
void SudokuCell<N>::toggle_fixed() {
	can_change = !can_change;
};
//void write(int i);
//int read() const;
//bool is_fixed() const;
//void fill_candidates();
//void clear_candidates();
//void add_candidate(int i);
//void remove_candidate(int i);
//int count_candidates() const;
//std::bitset<N*N + 1> get_candidates() const;

