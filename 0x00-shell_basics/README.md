# 0x00. Shell, basics

In this project, I learnt about the basic shell commands including: 
**Shell Navigation Commands**, such as `cd`, `pwd`, `ls` `less`for navigating 
directories and the shell. **File Manipulation Commands** , such as `cp` `mv`, 
`rm`, `touch`, `file`. **Help Commands** , such as `help` `man`. Finally, I 
practiced working with other commands, such as `type`, `which`, `mkdir`, `rmdir`.

## Project Tasks :page_with_curl:

**0. Where am I?**
  * [0-current_working_directory](./0-current_working_directory): Bash script that 
prints the absolute path name of the current working directory.

**1. What’s in there?**
  * [1-listit](./1-listit): Bash Script to display the contents list of your current directory.

**2. There is no place like home**
  * [2-bring_me_home](./2-bring_me_home): Bash script that changes the working directory to the 
user’s home directory.

**3. The long format**
  * [3-listfiles](./3-listfiles): Bash script that displays the current directory contents in 
a long format

**4. Hidden files**
  * [4-listmorefiles](./4-listmorefiles): Bash Script that displays current directory contents, 
including hidden files (starting with .

**5. I love numbers**
  * [5-listfilesdigitonly](./5-listfilesdigitonly): Bash script that displays current directory 
contents in long format, with user and group IDs displayed numerically, And hidden files (starting with .)

**6. Welcome**
  * [6-firstdirectory](./6-firstdirectory): Bash script that script that creates a directory 
named my_first_directory in the /tmp/ directory.

**7. Betty in my first directory**
  * [7-movethatfile](./7-movethatfile): Bash script for moving the file betty from /tmp/ to 
/tmp/my_first_directory.

**8. Bye bye Betty**
  * [8-firstdelete](./8-firstdelete): Bash script that deletes the file betty 
in /tmp/my_first_directory

**9. Bye bye My first directory**
  * [9-firstdirdeletion](./9-firstdirdeletion): Bash script that deletes the directory my_first_directory 
that is in the /tmp directory.

**10. Back to the future**
  * [10-back](./10-back): Bash script that changes the working directory to the previous one.

**11. Lists**
  * [11-lists](./11-lists): Bash script that lists all files (even ones with names beginning with a period 
character, which are normally hidden) in the current directory and the parent of the working directory and 
the /boot directory (in this order), in long format.

**12. File type**
  * [12-file_type](./12-file_type): Bash script that prints the type of the file named iamafile. The file 
iamafile will be in the /tmp directory when we will run your script.

**13. We are symbols, and inhabit symbols**
  * [13-symbolic_link](./13-symbolic_link): Bash script for creating a symbolic link to /bin/ls, 
named __ls__. in the current working directory.

**14. Copy HTML files**
  * [14-copy_html](./14-copy_html): Bash script for copying all the HTML files from the current working directory 
to the parent of the working directory, but only copy files that did not exist in the parent of the working directory 
or were newer than the versions in the parent of the working directory.

**15. Let’s move**
  * [100-lets_move](./100-lets_move): Bash script that moves all files beginning with an uppercase letter to the 
directory /tmp/u. Assuming that the directory /tmp/u will exist when we will run your script

**16. Clean Emacs**
  * [101-clean_emacs](./101-clean_emacs): Bash script that deletes all files in the current working directory that 
end with the character ~.

**17. Tree**
  * [102-tree](./102-tree): Bash script that creates the directories welcome/, welcome/to/ and welcome/to/school 
in the current directory

**18. Life is a series of commas, not periods**
  * [103-commas](./103-commas): Bash script that  lists all the files and directories of the current directory, 
separated by commas (,).

   * Directory names should end with a slash (/)
   * Files and directories starting with a dot (.) should be listed
   * The listing should be alpha ordered, except for the directories . and .. which should be listed at the very beginning
   * Only digits and letters are used to sort; Digits should come first
   * You can assume that all the files we will test with will have at least one letter or one digit
   * The listing should end with a new line

**19. File type: School**
  * [school.mgc](./school.mgc): Create a magic file school.mgc that can be used with the command file to detect School data 
files. School data files always contain the string SCHOOL at offset 0.
