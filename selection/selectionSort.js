let numbers = [8,2,6,4,9,5,1,3,7,4,5,6];

function selectionSort(arr) {
    for(let i = 0; i < arr.length - 1; i++) {
        let menor = i;
        for(let j = i + 1; j < arr.length; j++) {
            if (arr[menor] > arr[j]) menor = j;
        }
        let temp = arr[menor];
        arr[menor] = arr[i];
        arr[i] = temp;
    }
    return arr;
}

let sorted = selectionSort(numbers);
console.log(sorted);