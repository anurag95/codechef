import math
t = int(raw_input())
i=0
while(i<t):
		i+=1
		l = raw_input()
		m = long(l.split()[1])
		n = long(l.split()[2])
		x = long(l.split()[0])
		if(x == 1):
			print (m+1)%n
		else :
		    print long((math.pow(x, m+1)-1)/(x-1))%n
