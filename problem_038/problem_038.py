# Problem 38: Pandigital Multiples (compact but fully commented)
# Find the largest 1-9 pandigital 9-digit number from concatenated products of an integer with (1,2,...,n)

#function to find the largest pandigital concatenated product
def euler_38():
  digits = set('123456789') #set of all pandigital digits

  #largest pandigital comes from 4-digit i with n=2, because 5-digit i is too long and 3-digit i produces smaller numbers
  for i in range(9876, 9122, -1): #start from highest 4-digit numbers
    s = str(i) + str(i*2) #concatenate i and i*2
    #check pandigital with set
    if set(s) == digits:
      print(int(s)) #largest found so print and stop
      return

euler_38() #call function
