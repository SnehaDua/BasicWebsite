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
