""" Rverse list """


def reverse_list(lst: list):
    lst = lst[::-1]
    return lst


lst = [1,2,3,4,5,6,7,8,9,10]

print(reverse_list(lst))