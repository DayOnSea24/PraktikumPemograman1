pie = 3.14
r,t = input().split()
r = float(r)
t = float(t)
v = pie*r*r*t
lp = 2*pie*r*(r+t)
k = pie*(r+t)
v = format(v,".2f")
lp = format(lp,".2f")
k = format(k,".2f")
print('Volume =',v,'\nLuas =',lp,'\nKeliling =',k)