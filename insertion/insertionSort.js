let numbers = [8,2,6,4,9,5,1,3,7,4,5,6];

function insertionSort(arr) {
    for (let i = 1; i < arr.length; i++) {
        let key = arr[i];
        let j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j -= 1;
        }
        arr[j+1] = key;
    }
    return arr;
}

let sorted = insertionSort(numbers);
console.log(sorted);