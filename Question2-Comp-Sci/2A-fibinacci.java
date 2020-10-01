// QUESTION 2A
//WRITTEN IN JAVA
public static int fibonacciRecursion(int nthNumber) {
        //use recursion
        if (nthNumber == 0) {

            return 0;

        } else if (nthNumber == 1) {

            return 1;
        }   
     return fibonacciRecursion(nthNumber - 1) + fibonacciRecursion(nthNumber - 2);
}


public static int fibonacciLoop(int nthNumber) {
        //use loop
        int previouspreviousNumber, previousNumber = 0, currentNumber = 1;

        for (int i = 1; i < nthNumber ; i++) {

            previouspreviousNumber = previousNumber;

            previousNumber = currentNumber;

            currentNumber = previouspreviousNumber + previousNumber;

        }
        return currentNumber;
}


/**
    The Iteration method would be the preferred and faster approach to solving our problem because we are storing the 
    first two of our Fibonacci numbers in two variables (previouspreviousNumber, previousNumber) 
    and using "CurrentNumber" to store our Fibonacci number. Storing these values prevent us from 
    constantly using memory space in the Stack. Thus giving us a time complexity of O(n).
 */