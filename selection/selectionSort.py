def main():
    numbers = [8,2,6,4,9,5,1,3,7,4,5,6]
    selectionSort(numbers)
    print(numbers)

def selectionSort(arr):
    arrLength = len(arr)
    for i in range(arrLength - 1):
        min = i
        for j in range(i + 1, arrLength):
            if arr[min] > arr[j]:
                min = j
        temp = arr[min]
        arr[min] = arr[i]
        arr[i] = temp

if __name__=="__main__":
    main()