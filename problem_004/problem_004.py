# Problem 4: Largest Palindrome Product
# A palindromic number reads the same both ways.
# Find the largest palindrome made from the product of two 3-digit numbers.

#function to check if a number is a palindrome
def is_palindrome(n):
    return str(n) == str(n)[::-1]

#function to find the largest palindrome from two 3-digit numbers
def euler_4():
    #start from the largest 3-digit numbers and go down
    for i in range(999, 99, -1):
        for j in range(999, 99, -1):
            product = i * j
            #check if product is a palindrome
            if is_palindrome(product):
                print(product) #first palindrome found is the largest
                return
euler_4() #call the function
