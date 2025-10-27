# Problem 1: Multiples of 3 or 5
# If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6, and 9. The sum of these multiples is 23.
# Find the sum of all the multiples of 3 or 5 below a given number.

#function to solve euler problem
def euler_1(num): 
  #for every i that is divisible by 3 or 5, add it to the sum
  print(sum(i for i in range(num) if i % 3 == 0 or i % 5 == 0))

#call the function on the requested value
euler_1(1000)
