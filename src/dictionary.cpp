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
#include "d_matrix.h"
using namespace std;

Grid::Grid(string letterGrid_fn)
// given a letterGrid file, creates a Grid object
{
    // open and read file
    ifstream GridFile("../" + letterGrid_fn);

    // runs if cannot open file
    if (!GridFile) {
        cerr << "Error opening grid file\n";
        return;
    }

    // gets # of rows and # of cols from 1st line of input file
    int numRows, numCols;
    GridFile >> numRows >> numCols;

    // size the matrix using the first line
    letters = matrix<char>(numRows, numCols);

    string GridLine;
    getline(GridFile, GridLine); // clears the leftover newline after reading dimensions

    int row = 0;
    while (getline(GridFile, GridLine) && row < numRows) {
        int column = 0;

        // iterates through the Grid Line
        for (int i = 0; i < GridLine.size() && column < numCols; i++) {
            // only runs when the character is a letter
            if (isalpha(GridLine[i])) {
                // sets that specific row column value to read letter and adds one to column
                letters[row][column] = GridLine[i];
                column++;
            }
        }

        row++;
    }
}

char Grid::readIndex(int row, int col) const
// given a row and col, returns the value at that index
{
    return letters[row][col];
}