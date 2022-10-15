
let matrix1 = [
    [2, 4, 6, 7],
    [9, 3, 2, 6],
    [8, 2, 5, 8],
    [1, 5, 3, 6]
];

let matrix2 = [
    [6, 4, 3, 6],
    [4, 2, 6, 99],
    [4, 6, 2, 6],
    [3, 9, 0, 2]
]

let sumMatrix = [];

for (let i = 0; i < matrix1.length; i++) {
    let oneRowSum = [];
    for (let j = 0; j < matrix1[i].length; j++) {
        let sum = matrix1[i][j] + matrix2[i][j];
        oneRowSum.push(sum);
    }
    sumMatrix.push(oneRowSum);
}

console.log(sumMatrix);
