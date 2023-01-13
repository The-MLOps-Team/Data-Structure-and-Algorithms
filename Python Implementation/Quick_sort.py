from random import randint

def quick_sort(arr):
    n = len(arr)

    if n <= 1:
        return arr
    
    pivot = randint(0, n-1)

    a = []
    b = []

    for i in range(n):
        if i == pivot:
            continue

        if arr[i] <= arr[pivot]:
            a.append(arr[i])
        else:
            b.append(arr[i])
    
    sorted_a = quick_sort(a)
    sorted_b = quick_sort(b)

    sorted_arr = []

    for i in range(len(sorted_a)):
        sorted_arr.append(sorted_a[i])
    
    sorted_arr.append(arr[pivot])

    for i in range(len(sorted_b)):
        sorted_arr.append(sorted_b[i])

    return sorted_arr

arr = [2,7,5,1,8,4]

sorted = quick_sort(arr)

print(*sorted, sep=" ")