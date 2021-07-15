function generateMatrix() {
  let canvas = [];
  let count = 1;

  for (let i = 0; i < 4; i++) {
    let temp = [];
    for (let j = 0; j < 4; j++) {
      temp.push(count++);
    }
    canvas.push(temp);
  }

  return canvas;
}

function transposeMatrix(arrT) {
  let canvas = [];

  for (let i = 0; i < 4; i++) {
    let temp = [];
    for (let j = 0; j < 4; j++) {
      temp.push(arrT[j][i]);
    }
    canvas.push(temp);
  }

  return canvas;
}

function printMatrix(arrT) {
  for (let i = 0; i < 4; i++) {
    let str = "";
    for (let j = 0; j < 4; j++) {
      str = str + arrT[i][j] + "\t";
    }
    console.log(str);
  }
}

let genArr = generateMatrix();
printMatrix(genArr);

let transpose = transposeMatrix(genArr);
printMatrix(transpose);
