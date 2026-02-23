#include <vector>
#include <set>

class SudokuCell {
	int number;
	std::set<int> candidates;
public:
	SudokuCell();
	void write(int i);
	int read();
	void write_candidate(int i);
	void remove_candidate(int i);
};


class sudoku {
	std::vector<std::vector<int>> m;
public:
	sudoku();


}
