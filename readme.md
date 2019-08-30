### This is readme file

## To Do:

# Add instructions on how to compile and run
# ABOUT PASSWORD CRACKING-
Password cracking is the process of guessing or recovering a password from stored locations or from data transmission system.
It is used to get a password for unauthorized access or to recover a forgotten password. In penetration testing, it is used to check the security of an application.
Our tool focuses on password cracking for all. Using this tool we can perform number of operations which includes brute force , dictionary attacks , rainbow tables and hashing. This tool provides number of features at one place.
Our tool is very efficient to use and provides almost all the features provided by the premium tools.
Many people feel helpless when they are in need of such facilities such as forgot password, training purposes etc.
This tool provides them the platform to work freely without any hesitation.  
The brute force solution makes you really understand the problem without worrying about optimizing your solution. We know what our input will be and exactly how it needs to be modified to get to the output. Once we have a brute force solution, we can use many different techniques to improve our time and space complexity.
Our tool also provides the rainbow tables which are usually used for cracking password hashes. These tables are usually used in recovering a password up to certain length consisting of a limited set of characters.
Our too provides one of the important feature of hashing which can be used to check file authenticity , to generate rainbow tables , etc. A hash value can be used to uniquely identify secret information. Hash functions are widely used in cryptography.
Our tool will get improve and provide you with more features which includes like more characters , advanced brute force attacks , more easy and efficient password cracking techniques , etc.
############################################################
**DESCRIPTION OF FILES:

DATA FOLDER CONSIST OF FILES-**

1)Big_Character_Only.H-   To crack password consist of only capital alphabet
2)small_Character_Only.H- To crack password consist of only small alphabet
3)var_range_bruteforce.H- To crack password consist of any range of ascii
4)Indian_boy_Names -      Consist of names of indian boys
5)Indian_Girl_Names -     Consist of names of indian girls
6)SHA256 hashes of girl names- consist of hashes of indian girl names with sha256 hashes
7)name_extractor.py-      python code that separate name and their meaning
8)rainbow.py-             python code that use library to generate sha256 hashes of indian girls names
MAIN.CPP -                It is the main driver code that will include all the necessary files and will accept
                          command from terminal to include various options
            **SYNTAX OF WRITING COMMAND IN TERMINAL IS AS FOLLOW-**
                            [toolname] [-filetype] [filepath] [...added options...]
                                      **ADDED OPTIONS WILL ADD AS OUR PROJECT CONTINUES**
ErrorHandler.h-            to maintain all errors (currently handle only one error i.e.
                           when less number of commands are written

                           An h1 header
                           ============

                           Paragraphs are separated by a blank line.

                           2nd paragraph. *Italic*, **bold**, and `monospace`. Itemized lists
                           look like:

                             * this one
                             * that one
                             * the other one

                           Note that --- not considering the asterisk --- the actual text
                           content starts at 4-columns in.

                           > Block quotes are
                           > written like so.
                           >
                           > They can span multiple paragraphs,
                           > if you like.

                           Use 3 dashes for an em-dash. Use 2 dashes for ranges (ex., "it's all
                           in chapters 12--14"). Three dots ... will be converted to an ellipsis.
                           Unicode is supported. ☺



                           An h2 header
                           ------------

                           Here's a numbered list:

                            1. first item
                            2. second item
                            3. third item

                           Note again how the actual text starts at 4 columns in (4 characters
                           from the left side). Here's a code sample:

                               # Let me re-iterate ...
                               for i in 1 .. 10 { do-something(i) }

                           As you probably guessed, indented 4 spaces. By the way, instead of
                           indenting the block, you can use delimited blocks, if you like:

                           ~~~
                           define foobar() {
                               print "Welcome to flavor country!";
                           }
                           ~~~

                           (which makes copying & pasting easier). You can optionally mark the
                           delimited block for Pandoc to syntax highlight it:

                           ~~~python
                           import time
                           # Quick, count to ten!
                           for i in range(10):
                               # (but not *too* quick)
                               time.sleep(0.5)
                               print(i)
                           ~~~



                           ### An h3 header ###

                           Now a nested list:

                            1. First, get these ingredients:

                                 * carrots
                                 * celery
                                 * lentils

                            2. Boil some water.

                            3. Dump everything in the pot and follow
                               this algorithm:

                                   find wooden spoon
                                   uncover pot
                                   stir
                                   cover pot
                                   balance wooden spoon precariously on pot handle
                                   wait 10 minutes
                                   goto first step (or shut off burner when done)

                               Do not bump wooden spoon or it will fall.

                           Notice again how text always lines up on 4-space indents (including
                           that last line which continues item 3 above).

                           Here's a link to [a website](http://foo.bar), to a [local
                           doc](local-doc.html), and to a [section heading in the current
                           doc](#an-h2-header). Here's a footnote [^1].

                           [^1]: Some footnote text.

                           Tables can look like this:

                           Name           Size  Material      Color
                           ------------- -----  ------------  ------------
                           All Business      9  leather       brown
                           Roundabout       10  hemp canvas   natural
                           Cinderella       11  glass         transparent

                           Table: Shoes sizes, materials, and colors.

                           (The above is the caption for the table.) Pandoc also supports
                           multi-line tables:

                           --------  -----------------------
                           Keyword   Text
                           --------  -----------------------
                           red       Sunsets, apples, and
                                     other red or reddish
                                     things.

                           green     Leaves, grass, frogs
                                     and other things it's
                                     not easy being.
                           --------  -----------------------                        
