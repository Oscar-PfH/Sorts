let numbers = [8,2,6,4,9,5,1,3,7,4,5,6];

function bubbleSort(array) {
    for (let i = 0; i < array.length; i++) {
        for (let j = 0; j < array.length - 1; j++) {
            if (array[j] > array[j+1]) {
                let e = array[j];
                array[j] = array[j+1];
                array[j+1] = e;
            }
        }
    }
    return array;
}

let sorted = bubbleSort(numbers);
console.log(sorted);