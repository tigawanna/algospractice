let mainArr = [8, 2, 9, 4, 1, 5]

// swaps the values at index a and b on array arr
const swapValues = (arr, a, b) => {
    const temp = arr[a]
    arr[a] = arr[b]
    arr[b] = temp
    console.log(arr)
}

const pivot = (arr, left, right) => {
    let p = right
    let j = left
    let i = left - 1

  for (j = left; j <= p; j++) {
        console.log(i, j, p)
        console.log(arr[1], arr[j], arr[p])
        if (arr[j] > arr[p]) {
            j++
        }
        if (arr[j] < arr[p]) {
            i++
            swapValues(arr, i, j)
        }
    }

    i++
    swapValues(arr, i, p)

    return i
}


var sortNumbers = function (nums, left = 0, right = nums.length - 1) {
    if (left < right) {
        let pivotIdx = pivot(nums, left, right)
        sortNumbers(nums, left, pivotIdx - 1)
        sortNumbers(nums, pivotIdx + 1, right)
    }
    return nums

}

sortNumbers(mainArr)

console.log(mainArr)
