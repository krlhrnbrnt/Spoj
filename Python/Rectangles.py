import sys,math

for line in sys.stdin:
	n = int(line)
	t=n

	max = int(math.sqrt(n))
	for i in range(2,max+1):
		for j in range(i,n/i+1):
			t+=1
	print t