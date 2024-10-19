
function checkNumber(num) {
    if (num == 7) {
    alert("Hello");
    }
    else{
        alert("The entered data is not equal to 7")
    }
}
function checkName(name) {
    if (name === "John") {
    alert("Hello, John");
    } else {
    alert("There is no such name");
    }
}
function checkArrayMultiplesOf3(arr) {
    let multiples = arr.filter(el => el % 3 === 0); 
    if (multiples.length > 0) {
    alert("Elements divisible by 3: " + multiples.join(", "));
    } else {
    alert("No elements divisible by 3 in the array.");
    }
}
let numInput = prompt("Enter a number:");
if (numInput !== null && numInput.trim() !== "" && !isNaN(numInput)) { 
    let num = Number(numInput); 
    checkNumber(num);
} else {
    alert("Please enter a valid number.");
}

let nameInput = prompt("Enter a name:");
if (nameInput !== null && nameInput.trim() !== "") { 
    checkName(nameInput);
} else {
    alert("Please enter a valid name.");
}
let arrayInput = prompt("Enter an array of numbers separated by commas:");
if (arrayInput !== null && arrayInput.trim() !== "") { 
    let array = arrayInput.split(",").map(Number); 
    checkArrayMultiplesOf3(array);
} else {
    alert("Please enter a valid array.");
}
