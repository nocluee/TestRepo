const countLetters=(phrase)=>{
let count=0
for(const num in phrase){
count=count+1
}
console.log(count)

}

countLetters('Hi, how are you?')