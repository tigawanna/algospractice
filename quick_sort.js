


function swap(arr,idx_x, idx_y){
let temp = arr[idx_x];
arr[idx_x] = arr[idx_y];
arr[idx_y] = temp
}


function divide(arr,low,high){
const pivot_value = arr[high]     
let i = low
for (let j = low; j < high; j++){

if(arr[j] <= pivot_value){
swap(arr,i,j)
i++;
}

}

swap(arr, i,high)
return i
}

function conquer(arr,low,high){
 if(low < high){
 const pivot_index = divide(arr,low,high)
 conquer(arr , pivot_index + 1, high)
 conquer(arr, low, pivot_index - 1)
 }   
 }

function quicksort(){
let arr =[4,7,9,2,3]

conquer(arr , 0 , arr.length - 1)

console.log(arr)
}

quicksort()
