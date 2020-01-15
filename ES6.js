var vs Let----------------------------------------------------

function checkScope() {
  'use strict';
  let i = 'function scope';
  if (true) {
 let  i = 'block scope';
    console.log('Block scope i is: ', i);
  }
  console.log('Function scope i is: ', i);
  return i;
}


const and let--------------------------------------------------------------------


function printManyTimes(str) {
  "use strict";

  // change code below this line

  const SENTENCE = str + " is cool!";
  for (let i = 0; i < str.length; i+=2) {
    console.log(SENTENCE);
  }

  // change code above this line

}
printManyTimes("freeCodeCamp");

-----------------------------------------------------------------------------------------
Mutate an Array Declared with const
-----------------------------------------------------------------------------------------

const s = [5, 7, 2];
function editInPlace() {
  'use strict';
  // change code below this line
s[0] =2; s[1] =5; s[2] =7;
  // s = [2, 5, 7]; <- this is invalid

  // change code above this line
}
editInPlace();
------------------------------------------------------------------------------------
Prevent Object Mutation- Object.freeze
--------------------------------------------------------------------------------

function freezeObj() {
  'use strict';
  const MATH_CONSTANTS = {
    PI: 3.14
  };
  // change code below this line

Object.freeze(MATH_CONSTANTS)
  // change code above this line
  try {
    MATH_CONSTANTS.PI = 99;
  } catch(ex) {
    console.log(ex);
  }
  return MATH_CONSTANTS.PI;
}
const PI = freezeObj();

---------------------------------------------------------------------------
Anonymous Functions
--------------------------------------------------------------------------
const magic = () => {
  "use strict";
  return new Date();
};


const magic = () => new Date(); 
 
-----------------------------------------------------------------------------
Write Arrow Functions with Parameters
-----------------------------------------------------------------------------
const myConcat = (arr1, arr2) => {
  "use strict";
  return arr1.concat(arr2);
};
// test your code
console.log(myConcat([1, 2], [3, 4, 5]));

------------------------------------------------------------------------------------------