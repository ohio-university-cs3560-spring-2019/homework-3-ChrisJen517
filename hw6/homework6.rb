#Christian Jensen
#Febraury 24th, 2018
#This program replaces certain parts of a string from the standard input

puts "Enter a string"
initial = gets
initial.chomp
initial.strip

array = initial.split(/ /).each do |word|	 #Split the string into an array of single words
done = false
word.chomp
word.strip


if word.include?("f") or word.include?("F") 	 #Find f if its in the first spot replace it
	if word.index("f") == 0
		word.sub!("f", "gh")
	elsif word.index("F") == 0
		word.sub!("F", "Gh")
	end	
end


if word =~ /sh$/			       	#If the word ends with sh then replace it
	word = word[0..-3] + "ti"
elsif word =~ /Sh$/
	word = word[0..-3] + "Ti"
elsif word =~ /SH$/
	word = word[0..-3] + "TI"
elsif word =~ /sH$/
	word = word[0..-3] + "tI"
else
end


while done == false				#A loop incase there are multiple i's
	if word.include?("i") 			#Check if there are any i's in the middle and  
	l = word.count("i")			#then swap
		if l == 1 && word[-1, 1] == "i"
		done = true
		elsif l == 1 && word[0,1] == "i"
		done = true
		elsif word.index("i") != 0
			word[word.index("i")] = "o"
		end
	else
		done = true
	

	end
end
puts word
end
