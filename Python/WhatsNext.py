import sys

def AP(s):
	if s[1]-s[0] == s[2]-s[1]:
		return 'AP ' + str(s[2] + s[2]-s[1])
	else:
		return 0

def GP(s):
	if s[1]/s[0] == s[2]/s[1]:
		return 'GP ' + str(s[2] * s[2]/s[1])
	else:
		return 0
	

for line in sys.stdin:
	s = [int(n) for n in line.split()]
	if s!=[0,0,0]:
		a = AP(s)
		if a != 0:
			print a
		else:
			print GP(s)