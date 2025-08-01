#include <iostream>
#include <vector>

int main() {
    int rows, cols;

    std::cout << "Enter number of rows: ";
    std::cin >> rows;

    std::cout << "Enter number of columns: ";
    std::cin >> cols;

    // Create original matrix
    std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols));

    std::cout << "Enter the matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cin >> matrix[i][j];
        }
    }

    // Create transpose matrix
    std::vector<std::vector<int>> transpose(cols, std::vector<int>(rows));

    // Transpose logic
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Print original matrix
    std::cout << "\nOriginal Matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }

    // Print transposed matrix
    std::cout << "\nTransposed Matrix:\n";
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            std::cout << transpose[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
