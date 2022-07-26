let numArr = [8,2,9,4,1,5]



//works for single loop sort
const sort1 =(arr,left,right)=>{
    let pivot = right
    let j = left
    let i = left -1
    
    for(j = 0 ; j <= pivot ; j++){
    
    if(arr[j] > arr[pivot]){
    j++
    }
    if(arr[j] < arr[pivot]){
    i++
    swapNumbers(arr,i,j)
    }
    if( arr[j] === arr[pivot]){
    break
    }
    
    }
    i++
    swapNumbers(arr,i,pivot)
    //this will be the next index
    return i
    }
    
    const sort2 =(nums , left,right)=>{
        let p = right
        let j = left
        let i = left - 1
    
        while( j <= p){
         if(nums[j] <= nums[p]){
            i++
            [nums[i],nums[j]] = [nums[j],nums[i]]
            j++
         }else{
            j++
         }
        }
    
        i++
        [nums[i],nums[p]] = [nums[p],nums[i]]
    
        console.log(nums)
       //this will e the next pivot
        return i
    
    }
    
    const swapNumbers =(arr,a,b)=>{
        let temp = arr[a]
        arr[a] = arr[b]
        arr[b] = temp
        console.log(arr)
        }
        



var sortNumbers = function(nums,left = 0, right = nums.length-1){
    if(left < right){
     let pivotIdx = sort2(nums,left,right)

     sortNumbers(nums,left,pivotIdx -1 )
     sortNumbers(nums,pivotIdx + 1 ,right)
    }
   console.log(nums)
    return nums

}

sortNumbers(numArr)




