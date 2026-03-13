// FUNCTIONS //

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    # function types:
    - declaration functions
    accept after declaration
    - expression or anonymous functions
    doesn't accept after declaration
    - arrow functions

    # function types:
    - built-in functions: ready usable functions
    - user-defined functions: a function that user create
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    # function operation:
    - 1st: function declaration
    - 2nd: function call
*/


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    # [declaration function] declaration:
    - function function_name()
    {
        code_of_function;
        return return_value_of_function;
    }

    # [expression or anonymous function] declaration:
    - let function_name = function() 
    {
        code_of_function;
        return return_value_of_function;
    }

    # [Arrow function] declaration:
    - let function_name = () => {code_of_function  return return_value_of_function;}
    - if it has one line of (code_of_function) = you can delete {} and return word
    - if it hasn't any parameters you can delete () and write _
    - if it has only one parameter , you can delete ()
    - (=>) : this is  arrow operator
*/

/*
   - EX:
    let fun1 = (num) => 
    {
        console.log("the number is "+ num);
    }
    fun1(10);

    - EX:
    let fun2 = (num1,num2) =>
    num1+num2;
    console.log(fun2(10,20));

    - EX:
    let fun3 = _ => 
    {
        console.log("hello");
        return 10;
    }
    console.log(fun3());

    - EX:
    let fun4 = num => 
    {
        console.log("hello");
        return num;
    }
    console.log(fun4(10));
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*
    # function call:
    - function_name(); // operate code_of_function
    or
    - let x = function_name(); // operate code_of_function + (x=return_value_of_function)
    or
    - console.log(function_name()); // operate code_of_function + print return_value_of_function
*/


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    # arguement: sending data to function parameters
    # arguement could be:
    - undefined 
    - data ==> x(10)
    - variable ==> x(num) 
    - function has return value ==> x(y())
    - function has not return value ==> x(y())
    - form of function ==> x(y)
*/

/*
    # positional arguements:
    - function_name(data_1 , data_2);
    
    # named arguements:
    - function x( {num1 , num2 , num3} )
    {
        console.log(num1);
        console.log(num2);
        console.log(num3);
    }
    x({num1:10, num2:20, num3:30});
*/


/*
    # arguement could be:
    - function1_name(function2_name()) // value of parameter is undefined or return value of function2
    - function1_name(function2_name) // 
*/



/*
    EX:
    function main(para)
    {
        console.log("main");
        console.log(para);
    }
    function sec()
    {
        console.log("sec");
    }
    main(sec());

    EX:
    function main(para)
    {
        console.log("main");
        console.log(para);
        para();
    }
    function sec()
    {
        console.log("sec");
    }
    main(sec);
    console.log(sec);


*/



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    # predeclaration of function:
    - 1st: function declaration
    - 2nd: function call

    # after declaration of function:
    - 1st: function call
    - 2nd: function declaration
*/

/*

# hoisting of functions

*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*
    # Parameter: a variable that receive data in the function
    - function function_name(para_name_1 , para_name_2)
    {
        code_of_function;
        return return_value_of_function;
    }
*/


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    # Rest Parameter: 
    - its type is (array) , receive any number of arguments
    - only one in one function
    - must be last parameter
*/


/*
    - EX:
    function x( nums1 , nums2 , nums3 , ...nums)
    {
        console.log("nums1= " + nums1);
        console.log("nums2= " + nums2);
        console.log("nums3= " + nums3);

        console.log("\n");

        console.log("number of elements is: " + nums.length);

        console.log("\n");

        for(let i=0; i<nums.length; i++)
        {
            console.log(nums[i]);
        }
    }

    x(10,20,30,400,500,600);
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*
    # default value of function parameter: giving function parameters a default value
    - function_name(data_1 = 10 , data_2 = 20);
*/


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*
    # if you (send an arguement to function parameter) + (gave function parameter a default value):
    - value of function parameter = value of arguement


    # if you (didn't send an arguement to function parameter) + (gave function parameter a default value):
    - value of function parameter = default value of function parameter

    # if you (didn't send an arguement to function parameter) + (didn't gave function parameter a default value):
    - value of function parameter = undefined

     # last parameter should hasn't a default value:
*/


/*
    - EX:
    function x(para_name_1=100 , para_name_2=200)
    {
        console.log(para_name_1,para_name_2);
    }
    x(10,20);

    - EX:
    function x(para_name_1=100 , para_name_2=200)
    {
        console.log(para_name_1,para_name_2);
    }
    x();


    EX:
    function x(para_name_1, para_name_2)
    {
        console.log(para_name_1,para_name_2);
    }
    x();
*/


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    # return could be
    - a function
*/


/*
    EX: return y()
    return the return value of y function
*/


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    # Nested Functions:
    
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    ## Scopes:
    # Global Scope : any one can use variables that in Global Scope

    # Local Scope : not any one can use variables that in Local Scope

    # Block Scope: 
    - same local but with (if , loop , ..)

    # Lexical Scope:
    - same local but with (nested functions)
*/


/*
    - EX:
    let a = 10;
    var b = 20;
    // here a and b in the global scope
    function x()
    {
        console.log(a);
        console.log(b);
    }
    x();

    - EX: 
    function y()
    {
        let a = 10;
        var b = 20;
        // here a and b in the local scope
    }
    y();
    console.log(a);
    console.log(b);

*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    ## Higher Order Functions: a function that accept other function as a parameter
*/

/*
    # Map Function: 
    - accepts a call_back_function and apply it on each element of the array

    # Map Function Syntax:
    - let arr = [1,2,3,4];
    function callback(ele) {console.log(ele);}
    arr.map(callback);

    - or

    - let arr = [1,2,3];
    arr.map( function callback(ele){console.log(ele);} )

*/

/*
    # filter Function:
    - accepts a call_back_function and apply it on each element of the array

    - call_back_function(ele) {return conditional process}
      arr.filter(call_back_function)
    or
    - arr.filter(call_back_function(ele){return conditional process})

    # filter Function Syntax:
    - let arr = [1,2,3,4];
    function callback(ele) { if (ele>=2){console.log(ele);} }
    arr.filter(callback);

    - or

    - let arr = [1,2,3];
    arr.filter( function callback(ele){console.log(ele);} )
*/



/*
    # Reduce Function:
    - accepts a call_back_function and apply it on each element of the array
    - call_back_function(accumulator, current_element) {return one value on accumulator and current_element}
      arr.reduce(call_back_function)
    or
    - arr.reduce(call_back_function(accumulator, current_element){return one value on accumulator and current_element} , initial_value)
    - initial_value: 1st value of accumulator

*/







/*
    - EX:
    let arr = [1,2,3];
    let fn = (ele) => 
    {
        return ele*2;
    }
    let res = arr.map(fn);
    console.log(res);

    - EX:
    let arr = [1,2,3];
    let res = arr.map(function(ele){return ele*2;} , 10)
    console.log(res);

    - EX:
    let arr = [1,2,3];
    let res = arr.map(fn=(ele)=>{return ele*2;} , 10)
    console.log(res);

    - EX:
    let arr = [1, -10, -20, 15, 100, -30];
    let inv = arr.map(function(ele){return ele*-1;});
    console.log(inv);

    - EX:
    let name = "E12lze34ro";
    let res = name.split("").map(function(ele){return isNaN(ele) ? ele : "" ;});
    console.log(res.join(""));

    - EX:
    let arr = ["Ahmed", "Mohamed", "Sameh", "Asmaa", "Reem", "Israa", "Ali"];
    let res = arr.filter(function(ele){return ele.startsWith("A"); });
    console.log(res);

    - EX:
    let sentence = "I Love Foood Code Too Playing Much";
    let res = sentence.split(" ").filter(function(ele){return ele.length<=4;});
    console.log(res.join(" "));

    - EX:
    let arr = "Mohamed123";
    let res = arr.split("").filter(function(ele){return isNaN(ele) ? ele : "";});
    console.log(res.join(""));

    - EX:
    let mix = "A13BS2ZX";
    let res = mix.split("").filter(function(ele){return isNaN(ele) ? "" : ele;}).map(function(el){return el*el;});
    console.log(res.join(""));

    - EX:

*/

