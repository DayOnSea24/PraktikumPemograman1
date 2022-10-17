from math import sqrt
a,b = input().split()
a = int(a)
b = int(b)
c = sqrt((b*b)-(a*a))
k = a+b+c
l = (a*c)/2
c = int(c)
k = int(k)
l = int(l)
print('Alas =',c,'cm\nTinggi =',a,'cm')
print('Keliling =',k,'cm\nLuas =',l,'cm^2')