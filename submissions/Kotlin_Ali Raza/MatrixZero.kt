import java.util.Scanner
//Space complexity = O(1)
//Time complexity = O(n*m)
fun makeZero(matrix: Array<IntArray>, m: Int, n: Int) {
    var firstRow = false
    var firstCol = false
    //Store 0's in the corresponding first row and first column indices to work as indicator
    for (i in 0 until m)
        for (j in 0 until n)
            if (matrix[i][j] == 0) {
                if (i == 0) firstRow = true
                if (j == 0) firstCol = true
                matrix[i][0] = 0
                matrix[0][j] = 0
            }
    //Making entries in the matrix 0 using first row and column as a reference
    for (i in 1 until m)
        for (j in 1 until n)
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
                matrix[i][j] = 0
    //If there was a 0 already present in first row
    if (firstRow)
    //Make complete first row 0
        for (i in 0 until n)
            matrix[0][i] = 0
    //If there was a 0 already present in first column
    if (firstCol)
    //Make complete first column 0
        for (i in 0 until m)
            matrix[i][0] = 0
}

fun main() {
    val reader = Scanner(System.`in`)
    print("Enter number of rows: ")

    // nextInt() reads the next integer from the keyboard
    val m: Int = reader.nextInt()
    print("Enter number of columns: ")
    val n: Int = reader.nextInt()

    //The array of arrays
    val matrix = Array(m) { IntArray(n) }

    //Taking the input matrix
    print("\nEnter the matrix\n================\n")
    for (i in 0 until m) {
        print("Enter row " + (i + 1) + " entries\n")
        for (j in 0 until n) {
            matrix[i][j] = reader.nextInt()
        }
    }
    //Printing the input matrix
    println("You Entered:\n============")
    printMat(matrix, m, n)

    //Filling with zeroes
    makeZero(matrix, m, n)

    //Printing the resulting matrix
    println("Output Matrix\n=============")
    printMat(matrix, m, n)
}

fun printMat(matrix: Array<IntArray>, m: Int, n: Int) {
    print("[")
    for (i in 0 until m) {
        print("[")
        for (j in 0 until n) {
            print(matrix[i][j])
            if (j != n - 1)
                print(',')
        }
        print("]")
        if (i != m - 1)
            println()
    }
    println("]")
}
