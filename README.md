# Command-Line-Parser
3	Detailed Operation
       In all the following, a1.exe is assumed to be the name of your exe utable  le
 
       Typically in the command prompt we write a1.exe command [optional parameter(s)℄
       Your task is to identify the command and its parameters if appli able then return the orre t output or the proper error message.
       A List of the  commands and their expe ted output is shown below.

3.1	print ommand
       This command should print all the passed arguments separated by single spa es (indpendent of number of spa es/tabs between them).
 
3.2	reverse command
       This  command should print the provided arguments in a reverse order separated by single spaces


3.3	upper  command
       This  command should print all the provided arguments with all   hara ters lower ase

3.4	shuffleWord command
       This command should shu e the  hara ters of a provided word by swapping every pair of  hara ters

      
3.5	shfflueStatement
       This  command should shu e the words of the provided statements

       Command Line: a1.exe shuffleStatement Egypt has goodies Expe ted output: has Egypt goodies

3.6	Delete
       This  command should delete one of the provided arguments and print the remaining arguments.
The argument to be deleted is identi ed by the rst parameter given after delete

       Command Line: a1.exe delete 3 12 5 good 3 ni e
Expe ted output: 12 5 3 ni e

       Note that 3 represent an index for the third element in the list and the list starts at	12.
       Note also the list may  contain any data type
 
3.7	Middle
       This command nds and prints the middle element(s) in a list of arguments.  If  the  number  is arguments after the command is even, then there are two middles.
       Command Line: a1.exe middle 3 12 5 good 3 ni e Expe ted output: 5 good

3.8	Add
       This  command should add all the integer numbers after add and return the sum
       If the arguments are non-numeri integers then it should print an error message as des ribed below in se tion 3.10.
       Command Line:  a1.exe add 4 5 6	2
Expected output:	17
3.9	Random
       This command should generate a sequen e of random numbers give a spe i range (min and max numbers) and a seed value. The length of the sequen e is passed as a parameter
       Command Line: a1.exe random 10 1 10	4
a1.exe random sequen eLength minNumber maxNumber seedValue Expe ted output: 8 2 10 3 10 1 7 8 7	1
       Use rand() and srand(...) fun tions in this part

3.10	ERROR Handling
       You should  cheak for the correctness of every command (e.g. number of arguments).
       You may use the following error messages to reflect the reason of not performing the command

    Undefined Command 
    Incorret Number of Arguments 
    Incorret Data Type 
