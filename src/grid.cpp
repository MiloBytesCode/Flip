/* ========================================================================= */
// 11-zogwidrouhua-3a
//
// PROJECT WORD SEARCH
//
// The implementation for the Dictionary Class
/* ========================================================================= */

#include "grid.h"
#include <fstream>
#include <cctype>
#include <vector>
#include "d_matrix.h"
using namespace std;

Grid::Grid(string letterGrid_fn)
{
    string GridLine;
    ifstream GridFile("../" + letterGrid_fn);

    if (!GridFile) {
        cerr << "Error opening grid file\n";
        return;
    }

    vector<string> lines;

    // read all lines first so we can figure out size of matrix
    while (getline(GridFile, GridLine)) {
        lines.push_back(GridLine);
    }

    // gets # of rows and columns
    int numRows = lines.size();
    int numCols = 0;
    if (numRows > 0) {
        for (int i = 0; i < lines[0].size(); i++) {
            if (isalpha(static_cast<unsigned char>(lines[0][i]))) {
                numCols++;
            }
        }
    }

    // sets matrix size
    letters = matrix<char>(numRows, numCols);

    // fills the matrix
    for (int row = 0; row < numRows; row++) {
        int column = 0;
        for (int i = 0; i < lines[row].size(); i++) {
            if (isalpha(lines[row][i])) {
                letters[row][column] = lines[row][i];
                column++;
            }
        }
    }
}

char Grid::readIndex(int row, int col) const
{
    return letters[row][col];
}