# Problem 2: Even Fibonacci Numbers
# By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.

#function to compute sum of even valued fibonacci sequence numbers up to a cap
def euler_2(cap):
  a, b, total = 1, 2, 0 #assign values

  #while a is smaller than the maximum capacity, as long as its even add to total
  while a < cap:
    if a % 2 == 0: total += a
    a, b = b, a + b #update the new fibonnaci values
  
  print(total) #print output once loop is complete

euler_2(4000000) #call the function on a cap of 4 million
