""" flatten a nestsed list """


def flatten_list(collection: list):
    result = []
    for i in collection:
        if isinstance(i,list):
            result.extend(flatten_list(i))
        else:
            result.append(i)
    
    return result



lst  = [11,4,[3,4,5],4,8,9,[8,7,6],1,2]

print(flatten_list(lst))