from ast import If


a=4
b=8
c=3
x='Apakah a sama dengan b ? jawabannya adalah'
y='Apakah b lebih besar dari c ? jawabannya adalah'
z='Apakah a tidak sama dengan c ? jawabannya adalah'
print('Variabel a bernilai',a)
print('Variabel b bernilai',b)
print('Variabel c bernilai',c)
print(x,'1')if a==b else print(x,'0')
print(y,'1')if b>c else print(y,'0')
print(z,'1')if a!=b else print(z,'0')