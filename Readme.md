# 2D-ARRAY-AND-RECURSION

## callstack 

### What is a Stack?

A stack is a linear data structure that follows the Last-In, First-Out (LIFO) principle. This means that the last element added (pushed) to the stack is the first one to be removed (popped). Stacks are used in many areas of computer science, such as expression evaluation, backtracking, and function call management.

### What is a Call Stack?

The call stack is a special type of stack used by programming languages to keep track of active function calls. Each time a function is called, a new stack frame is pushed onto the call stack, containing information like local variables, parameters, and the return address. When the function finishes, its frame is popped off, and control returns to the previous function.

The call stack allows programs to handle nested and recursive function calls, ensuring that each function has its own context and can return to the correct place in the code.

```c
#include <stdio.h>

void mello()
{
    printf("Mello\n");
}

void gello()
{
    printf("Gello\n");
    mello();
}

void hello()
{
    printf("Hello\n");
    gello();
}

int main()
{
    printf("Hi\n");
    hello();
    return 0;
}
```

#### How it works in the above code:
1. The program starts in `main()`, which prints "Hi" and calls `hello()`.
2. `hello()` prints "Hello" and calls `gello()`.
3. `gello()` prints "Gello" and calls `mello()`.
4. `mello()` prints "Mello".

Each function call adds a new frame to the call stack. When `mello()` finishes, its frame is removed, and control returns to `gello()`, then to `hello()`, and finally to `main()`. This stack-based management allows for nested and recursive function calls, ensuring each function has its own context and can return to the correct place in the code.


## recursion 
- when a function calls himself 

```c
#include <stdio.h>


void hello()  // recursive function 
{
    printf("Hello\n");
    hello();
}

int main()
{
    printf("Hi\n");
    hello();
    return 0;
}
```
### What is Recursion?

Recursion is a programming technique where a function calls itself directly or indirectly to solve a problem. Each recursive call creates a new frame on the call stack, just like a regular function call.

#### How it works in the above code:
1. The program starts in `main()`, which prints "Hi" and calls `hello()`.
2. `hello()` prints "Hello" and then calls itself again.
3. This process repeats indefinitely, with each call to `hello()` adding a new frame to the call stack.

Since there is no condition to stop the recursion (no base case), the function keeps calling itself until the call stack limit is reached, causing a stack overflow error. In practice, recursive functions should always have a base case to stop the recursion and prevent such errors.


![alt text](image.png)


## now lets learn how to control the recursion 
- print 1 to 5 using recursion 

```c
#include <stdio.h>

void hello(int i)
{
    if (i == 6)
    {
        return;
    }
    printf("%d\n", i);
    hello(i + 1);
}

int main()
{
    int i = 1;
    hello(i);
    return 0;
}
```

#### its similar to loop (incremental)
```c
#include <stdio.h>

void hello(int i)
{
    if (i == 6)  // end condition for the recursion, when i becomes 6, the function will return and stop the recursion 
    {
        return;
    }
    printf("%d\n", i);
    hello(i + 1);  // increment/decrement the value of i
}

int main()
{
    int i = 1;
    hello(i);  // initialize the value of i with 1 and pass it to the function
    return 0;
}

```

#### lets see the reverse loop (decremental)

```c
#include <stdio.h>

void hello(int i)
{
    if (i == 0)
    {
        return;
    }
    printf("%d\n", i);
    hello(i - 1);
}

int main()
{
    int i = 5;
    hello(i);
    return 0;
}

```

- without changing the login we will be doing same decremental lets do it 

```c
#include <stdio.h>

void hello(int i)
{
    if (i == 6)
    {
        return;
    }
    hello(i + 1);
    printf("%d\n", i); // this will be printing from 5 to 1 
    // this print works like magic because it works when function is removing from the stack so for this reason its showing in reverse order
}

int main()
{
    int i = 1;
    hello(i);
    return 0;
}
```

##### Step 1: Function calls go into the stack

When you call hello(i + 1), the current function pauses and waits.

So this happens:

```
hello(1)
 └── hello(2)
      └── hello(3)
           └── hello(4)
                └── hello(5)
                     └── hello(6)
```
- for each and every call its not reaching print function because its not reaching 6. when 6 reaches the functions are been poping off from the stack and reaching the print function because no more chance to be called again. when poping off the las function i value was 5; so that the point it prints 5 to 1


- print array using recursion 

```c
#include <stdio.h>
void print_array(int arr[], int n, int i)
{
    if (i == n)
    {
        return;
    }
    printf("%d ", arr[i]);
    print_array(arr, n, i + 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    print_array(arr, n, 0);
    return 0;
}
```

