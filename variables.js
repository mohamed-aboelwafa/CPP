// Variables //

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    # to create a variable:
    - var + variable_name = data;
    - let + variable_name = data;
    - const + variable_name = data;
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    # variable_name conditions:
    - no space
    - no special characters
    - no special words ex: var
    - no start with number
    - camalCase 
    - snake_case
    - UPPER_SNAKE_CASE
    - PascalCase
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    # variable declaration: - var , let , const
    - ex:
    var x;
    console.log(x); - undefined

    # variable assign: - var , let , const
    - ex:
    x = 20;

    # variable redeclaration: - var
    - ex:
    var x = 10;
    var x = 20;

    # variable reassign: - var , let
    - ex:
    let x = 10;
    x = 20;
*/

/*
    
*/


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    # Hoisting: // var , let(with error)(TDZ Temporal Dead Zone) , const(with error)(TDZ Temporal Dead Zone)
    // JavaScript makes predeclaration for any variable before all code

    # ما هو ال TDZ
    طالما دخل ال tdz 
    يبقي مش undefined
*/

/*

    # Hoisting: (works with var only)
    - If you want to print a variable before declare or assign it ,
    JavaScript raises the [definition] of variable to the top of the scope before the code is executed.
    and the value of the variable will be (undefined)   

    # TDZ: (works with let and const only)
    - If you want to print a variable before declare or assign it ,
    the variable enter TDZ ,
    and the value of variable will not be undefined


    # EX:
    console.log(x); // undefined
    var x = 10;

    
    console.log(y); // Error
    let y = 10;

    
    console.log(z); // Error
    consst z = 10;
    
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*
    // right
    var x 
    var x


    // error
    var x
    let x

    let x
    var x 

*/


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


