
Initializing

Alright, let’s get more comfortable with string.

Write, in a file called initials.c, a program that prompts a user for their name (using GetString to obtain their name as a string) and then outputs their initials in uppercase with no spaces or periods, followed by a newline (\n) and nothing more. You may assume that the user’s input will contain only letters (uppercase and/or lowercase) plus single spaces between words. Folks like Joseph Gordon-Levitt, Conan O’Brien, and David J. Malan won’t be using your program.

So that we can automate some tests of your code, your program must behave per the examples below. Assumed that the underlined text is what some user has typed.

jharvard@appliance (~/Dropbox/pset2): ./initials
Zamyla Chan
ZC
jharvard@appliance (~/Dropbox/pset2): ./initials
robert thomas bowden
RTB

If you’d like to check the correctness of your program with check50, you may execute the below.

check50 2014.fall.pset2.initials initials.c

And if you’d like to play with the staff’s own implementation of initials in the appliance, you may execute the below.

~cs50/pset2/initials
