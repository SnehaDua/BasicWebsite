// Example
var ourName;

// Declare myName below this line
 var myName;

var myStr = "I am a \"double quoted\" string inside \"double quotes\"."; // Change this line

----------------------------------------------------------
// Example
var ourStr = "I come first. " + "I come second.";

// Only change code below this line

var myStr = "this is the Start. " + "this is the end.";

-----------------------------------------------------------
// Example
var ourStr = "I come first. ";
ourStr += "I come second.";

// Only change code below this line

var myStr = "This is the first sentence. " ;
myStr += "This is the second sentence.";
-----------------------------------------------------------------
// Example
function ourFunctionWithArgs(a, b) {
  console.log(a - b);
}
ourFunctionWithArgs(10, 5); // Outputs 5

// Only change code below this line.
function functionWithArgs(arg1, arg2) {
  console.log(arg1+arg2);
}

functionWithArgs(10,13);
---------------------------------------------------------------
0// Declare your variable here
var myGlobal=10;

function fun1() {
  // Assign 5 to oopsGlobal Here
oopsGlobal =5;
}

// Only change code above this line
function fun2() {
  var output = "";
  if (typeof myGlobal != "undefined") {
    output += "myGlobal: " + myGlobal;
  }
  if (typeof oopsGlobal != "undefined") {
    output += " oopsGlobal: " + oopsGlobal;
  }
  console.log(output);
}
-------------------------------------------------------------
// Example
function minusSeven(num) {
  return num - 7;
}

// Only change code below this line

function timesFive(n) {
  return n*5;
}

console.log(minusSeven(10));
console.log(timesFive(0));
----------------------------------------------------------
function testGreaterOrEqual(val) {
  if (val>=20) {  // Change this line
    return "20 or Over";
  }

  if (val>=10) {  // Change this line
    return "10 or Over";
  }

  return "Less than 10";
}

// Change this value to test
testGreaterOrEqual(10);
----------------------------------------------------
var names = ["Hole-in-one!", "Eagle", "Birdie", "Par", "Bogey", "Double Bogey", "Go Home!"];
function golfScore(par, strokes) {
   // Only change code below this line
if(strokes == 1){
  return names[0];
}else if(strokes <= (par-2)) {
  return names[1];
}else if(strokes == par-1) {
  return names[2];
}else if(strokes == par) {
  return names[3];
}else if(strokes == (par+1)) {
  return names[4];
}else if(strokes == (par+2)) {
  return names[5];
}else{
  return names[6];
}

 // return "Change Me";
  // Only change code above this line
}

// Change these values to test
golfScore(5, 4);
--------------------------------------------------------
var count = 0;

function cc(card) {
  // Only change code below this line

switch(card){
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  count ++;
  break;
  
  case 7:
  case 8:
  case 9:
  break;

  case 10:
  case 'J':
  case 'Q':
  case 'K':
  case 'A':
  count --;
  break;
}

if (count > 0){
return (count+" Bet");
}else {
  return (count+" Hold");}
  // Only change code above this line
}

// Add/remove calls to test your function.
// Note: Only the last will display
cc(2); cc(3); cc(4); cc(5); cc(6);
----------------------------------------------------------------
// Setup
function phoneticLookup(val) {
  var result = "";

  // Only change code below this line
var lookup = {
"alpha" : "Adams",
"bravo" : "Boston",
"charlie": "Chicago",
 "delta": "Denver",
 "echo": "Easy",
 "foxtrot": "Frank"
};
result = lookup[val];
/*  switch(val) {
    case "alpha":
      result = "Adams";
      break;
    case "bravo":
      result = "Boston";
      break;
    case "charlie":
      result = "Chicago";
      break;
    case "delta":
      result = "Denver";
      break;
    case "echo":
      result = "Easy";
      break;
    case "foxtrot":
      result = "Frank";
  }
*/
  // Only change code above this line
  return result;
}

// Change this value to test
phoneticLookup("charlie");

----------------------------------------------------------
// Setup
var myObj = {
  gift: "pony",
  pet: "kitten",
  bed: "sleigh"
};

function checkObj(checkProp) {
  // Your Code Here
if (myObj.hasOwnProperty(checkProp)){
  return myObj[checkProp];
}else {
   return "Not Found";
}
 
}

// Test your code by modifying these values
checkObj("gift");

--------------------------------------------------------------------
// Setup
var myPlants = [
  {
    type: "flowers",
    list: [
      "rose",
      "tulip",
      "dandelion"
    ]
  },
  {
    type: "trees",
    list: [
      "fir",
      "pine",
      "birch"
    ]
  }
];

// Only change code below this line

var secondTree = myPlants[1].list[1]; // Change this line

---------------------------------------------------------------------------
// Setup
var myArray = [];
var i = 5;
while(i>=0){
    myArray.push(i);
    i--;
}
// Only change code below this line.
---------------------------------------------------------------------------

// Example
var ourArray = [];

for (var i = 0; i < 10; i += 2) {
  ourArray.push(i);
}

// Setup
var myArray = [];
 
 for(var i=1;i<=9;i=i+=2){
myArray.push(i);
 }
// Only change code below this line.

-----------------------------------------------------------------------------

// Example
var ourArr = [ 9, 10, 11, 12];
var ourTotal = 0;

for (var i = 0; i < ourArr.length; i++) {
  ourTotal += ourArr[i];
}

// Setup
var myArr = [ 2, 3, 4, 5, 6];
var total =0;
for(var i = 0; i<myArr.length; i++){
  total +=myArr[i];
}
// Only change code below this line
-----------------------------------------------------------------------------------
function multiplyAll(arr) {
  var product = 1;
  // Only change code below this line
for(var i =0; i<arr.length;i++){
  for(var j=0;j<arr[i].length;j++){
    product*=arr[i][j];
  }
}
  // Only change code above this line
  return product;
}

// Modify values below to test your code
multiplyAll([[1,2],[3,4],[5,6,7]]);

--------------------------------------------------------------------------------------
// Setup
var myArray = [];
var i = 10;

// Only change code below this line
do {
  myArray.push(i);
  i++;
}while (i <  5);
--------------------------------------------------------------------------------------

