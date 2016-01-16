Deep Desai 
500562898
All 3 programs are representations of stacks in XML language.  
Part 1 is for single small letters.  
Part 2 counts the number of each letter appearances provided the input is valid.  
Part 3 does the same as the 2nd one except it is for words or strings, and it uses a hash table.  
I believe all 3 programs work.

Q1.  Linear probing was use in this lab because we want 1 word per table space in order to do a count, and linear probing allows this in a simple look-for-next empty way.  Note that chaining is for putting related words all connected to a table space.
Q2.  Division function was used, as per pseudo code instruction.  A string was converted into a number by summing together the ASCII values of the characters in the string, as shown below.
	//Sum together the ASCII values of the characters in the string:
	for (i = 0; i < num; i++) {
		sum += tag[i];
	}
Q3.  A stand alone tag is like <foo/>.  To include to part 3, modify the alphabet while scan to stop
at '>' or '/' .  If stop at '>', do the normal tasks for start tags.  If stop at '/', do the normal tasks for start tags and end tags together, so the stand alone tag gets a space for itself in the hash table, and it is put into and immediately removed from the stack.
