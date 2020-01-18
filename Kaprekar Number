//https://www.hackerrank.com/challenges/kaprekar-numbers
//funtion returns whether a number is karpreker number
def check(n):
    ns=str(n)
    d=len(ns)
    count=0
    num1=n*n
    while count<d:
        count=count+1
        num=10**count
        if num==n:
            continue
        s=num1//num + num1%num
        if s==n:
            return True
    return False 
    
