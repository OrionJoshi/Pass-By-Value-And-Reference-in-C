# Pass-By-Value-And-Reference

Arguments can generally be passed to function in one of the following two ways

- Pass by value(call by value)
- Pass by reference(call by reference)

### Pass by Value

In this method, the value of each of the actual arguments in the calling function is copied into corresponding formal arguments of the function. With this method the changes made to the formal arguments in the called function have no effect on the value of actual arguments in the calling function.

![value](./Images/cpp-pass-by-value.png)

In the above diagram the value contain by the variable is passed to a function, the separate block of memory is reserved.

If we do any change in the value of the variable then there is `no effect in the value of variable inside of the function` because Pass by value means that `a copy of the actual parameter’s value is made in memory,` i.e. the `caller(the caller is a function that calls another function.)` and `callee(Callee is a function called by another)` have two independent variables with the same value. If the callee modifies the parameter value, the effect is not visible to the caller.
