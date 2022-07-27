


const arr1 =[5,2,3] , arr2 =[8,6,4]




function simpleMerge(left , right){
    let i , j = 0
    let sorted =[]
    for (i = 0;i<left.length;i++){
        for (j = 0;j<right.length;j++){
        if( left[i] > right[j] ){
            sorted.push(right[j])
            j++
        }else{
            sorted.push(left[i])
            i++ 
        }
        

        }
        

    }
    // if(right.length > 0){
    //     sorted.push(...right)
    // }
    // if(left.length > 0){
    //     sorted.push(...left)
    // }

    console.log(sorted)
}




function sortArray(){

}
