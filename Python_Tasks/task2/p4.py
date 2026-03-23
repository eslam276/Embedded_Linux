""" lsit statistics --> dict sum ,avg , count """


def list_statistics(numbers: list):
    
    sum = 0 
    count = 0
    for i  in numbers:
        sum+=i
        count+=1
    avg = sum/count
    
    result = { 'sum':sum , "count":count , 'avg' : avg}
    return result


numbers = [1,2,3,4,5]

print(list_statistics(numbers))

    
###################################################

# another solution

def list_statistics(numbers: list):
    
    total = sum(numbers)
    count = len(numbers)
    avg = total/count
    
    return {'sum':total , "count":count , 'avg' : avg}


numbers = [1,2,3,4,5]

print(list_statistics(numbers))