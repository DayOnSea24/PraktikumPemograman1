a,b,c = input().split()
a = int(a)
b = int(b)
c = int(c)
if a<b:
    if b<c:
        small= a;mid= b;big= c
    elif a<c:
        small= a;mid= c;big= b
    else:
        small= c;mid= a;big= b
elif b<c:
    if a<c:
        small= b;mid= a;big= c
    else:
        small= b;mid= c;big= a
elif c<a:
    if a<b:
        small= c;mid= a;big= b
    else:
        small= c;mid= b;big= a
print(small,mid,big)