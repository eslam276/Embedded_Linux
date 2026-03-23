""" find max min in a list """

def find_max_min(lst: list):
    max = lst[0]
    min = lst[0]
    for i in lst:
        if i>max:
            max = i 
        elif i< min :
            min = i
    return max,min 


lst = [1,2,3,4,5,6,7,8,9,10,2,120,1,99,0,7]

largest,smallest = find_max_min(lst)

print(largest,smallest)


##############################################################################

# another solution 

largest = max(lst)
smallest = min(lst)

print(largest,smallest)



