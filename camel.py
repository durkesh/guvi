def myfn(word):
    import re
    return ''.join(x.capitalize() or '_' for x in word.split(' '))

a=input()
print(myfn(a))
