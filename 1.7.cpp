// Complexity
// Time: O(nn)
// Space: O(1)

void rotateMatriz(vector<vector<int>> matrix)
{
    int left = 0;
    int right = matrix.size() - 1;
    int lenght = matrix.size();
    for (int x = 0; x < lenght / 2; x++)
    {
        left = x;
        right = lenght - x - left;
        for (int i = left; i < right; i++)
        {
            int top = left;
            int bottom = right;
            int topValue = matrix[top][left + i];
            matrix[top][left + i] = matrix[bottom][left]; // left -> top
            matrix[][] = matrix[][]
        }
    }
}