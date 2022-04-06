def main():
    numbers = [8,2,6,4,9,5,1,3,7,4,5,6]
    insertionSort(numbers)
    print(numbers)

def insertionSort(arr):
    for i in range(1, len(arr)):
        k = arr[i]
        j = i - 1
        while (j >= 0 and arr[j] > k):
            arr[j+1] = arr[j]
            j -= 1
        arr[j+1] = k

if __name__=="__main__":
    main()