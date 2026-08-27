num = int(input("Enter a number: "))

if num < 0:
    print("Factorial does not exist for negative numbers.")
elif num == 0:
    print("Factorial = 1")
else:
    fact = 1
    i = 1
    while i <= num:
        fact = fact * i
        i = i + 1
    print("Factorial =", fact)