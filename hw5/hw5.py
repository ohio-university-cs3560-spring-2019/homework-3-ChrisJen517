import sys 

for i in sys.stdin:
	word = i.split()

print "The number of lines: \t\t", word[0]

print "The number of words: \t\t", word[1]

print "The number of characters: \t", word[2]
