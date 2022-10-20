class SetMatrixZero {
    public static void main(String[] args) {
        int[][] a = { { 0, 1, 2, 0 }, { 3, 4, 5, 2 }, { 1, 3, 1, 5 } };
        int col0 = 1, rows = a.length, cols = a[0].length;

        for (int i = 0; i < rows; i++) {
            if (a[i][0] == 0)
                col0 = 0;
            for (int j = 1; j < cols; j++)
                if (a[i][j] == 0)
                    a[i][0] = a[0][j] = 0;
        }

        for (int i = rows - 1; i >= 0; i--) {
            for (int j = cols - 1; j >= 1; j--)
                if (a[i][0] == 0 || a[0][j] == 0)
                    a[i][j] = 0;
            if (col0 == 0)
                a[i][0] = 0;
        }
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                System.out.print(a[i][j] + "    ");
            }
            System.out.println();

        }

    }

}
