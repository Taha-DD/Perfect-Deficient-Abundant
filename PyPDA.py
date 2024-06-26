def PDA(num):
    sm = 0
    for i in range(1, num):
        if num%i == 0:
            sm += i
    
    print(f"{num} is ", end="")
    
    if sm == num:
        print("perfect")
    elif sm < num:
        print("deficient")
    else:
        print("abundant")

num = int(input("enter a num: "))

PDA(num)