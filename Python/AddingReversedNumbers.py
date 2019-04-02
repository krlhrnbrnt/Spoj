import sys
for i,l in enumerate(sys.stdin):
	if i>0:print int(str(int(l.split()[0][::-1])+int(l.split()[1][::-1]))[::-1])