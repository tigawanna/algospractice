
const arr=[1,5,2,7,3]

function sortArray(nums){
    console.log(nums)
    if(nums.length <= 1) {
     return nums
}
    let mid = Math.floor(nums.length/2)

    let left = sortArray(nums.slice(0,mid)) 
    let  right = sortArray(nums.slice(mid))

    return merge(left,right)
}




function merge(left,right){
let result =[]
let i = 0 , j = 0

while (i<left.length && j<right.length){
    if(left[i]>right[j]){
      result.push(right[j])
       j++  
    }else{
        result.push(left[i])
        i++ 
    }
}

while(i<left.length){
    result.push(left[i])
    i++
}
while(j<right.length){
    result.push(right[j])
    j++
}

console.log(result)
return result

}




sortArray(arr)


