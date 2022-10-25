ss = int(input())
if ss<60 and ss>=0:
    print('00:00:{:02d}'.format(ss))
elif ss>=60 and ss<3600:
    print('00:{:02d}:{:02d}'.format(int(ss/60),int(ss%60)))
elif ss>=3600 and ss<86400:
    print('{:02d}:{:02d}:{:02d}'.format(int(ss/3600),int((ss%3600)/60),int((ss%3600)%60)))
elif ss>=86400:
    print('{} hari {:02d}:{:02d}:{:02d}'.format(int(ss/86400),int((ss%86400)/3600),int(((ss%86400)%3600)/60),int(((ss%86400)%3600)%60)))
else:
    print('Error',complex(ss))