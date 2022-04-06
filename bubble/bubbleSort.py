def main():
    numbers = [8,2,6,4,9,5,1,3,7,4,5,6]
    bubbleSort(numbers, len(numbers))
    print(numbers)

def bubbleSort(anArray, length):
    for i in range(length):
        for j in range(length - 1):
            if anArray[j] > anArray[j+1]:
                n = anArray[j]
                anArray[j] = anArray[j+1]
                anArray[j+1] = n

if __name__=="__main__":
    main()