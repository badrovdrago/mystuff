def add(a,b):
    return a+b

def subtract(a,b):
    return a-b

def multiply(a,b):
    return a*b

def divide(a,b):
    if b==0:
        return "Error"
    return a/b

while True:
    print("1 Add")
    print("2 Subtract")
    print("3 Multiply")
    print("4 Divide")
    print("5 Exit")

    choice=input("Choose:")

    if choice=="5":
        break

    a=float(input("First number:"))
    b=float(input("Second number:"))

    if choice=="1":
        print(add(a,b))

    elif choice=="2":
        print(subtract(a,b))

    elif choice=="3":
        print(multiply(a,b))

    elif choice=="4":
        print(divide(a,b))                      

        # This is a simple calculator program that allows the user to perform basic arithmetic operations (addition, subtraction, multiplication, and division) on two numbers. The user can choose the operation they want to perform and input the numbers. The program will then display the result of the operation. The user can exit the program by choosing option 5.
        #drago badrov
