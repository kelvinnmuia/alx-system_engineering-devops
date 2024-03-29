# 0x00. Shell, basics
## The Domains/Concepts covered in this project: `DevOps`  `Shell`  `Bash`

In this project, I learned about the basic shell commands including: 
**Shell Navigation Commands**, such as `cd`, `pwd`, `ls` `less`for navigating 
directories and the shell. **File Manipulation Commands** , such as `cp` `mv`, 
`rm`, `touch`, `file`. **Help Commands** , such as `help` `man`. Finally, I 
practiced working with other commands, such as `type`, `which`, `mkdir`, `rmdir`.

## Project Tasks :page_with_curl:

**0. Where am I?**

Write a script that prints the absolute path name of the current working directory.

Example:

```
$ ./0-current_working_directory
/root/alx-system_engineering-devops/0x00-shell_basics
$
```

  * [0-current_working_directory](./0-current_working_directory): Bash script that 
prints the absolute path name of the current working directory.

**1. What’s in there?**

Display the contents list of your current directory.

Example:

```
$ ./1-listit
Applications    Documents   Dropbox Movies Pictures
Desktop Downloads   Library Music Public
$
```

  * [1-listit](./1-listit): Bash Script to display the contents list of your current directory.

**2. There is no place like home**

Write a script that changes the working directory to the user’s home directory.

  * You are not allowed to use any shell variables

```
julien@ubuntu:/tmp$ pwd
/tmp
julien@ubuntu:/tmp$ echo $HOME
/home/julien
julien@ubuntu:/tmp$ source ./2-bring_me_home
julien@ubuntu:~$ pwd
/home/julien
julien@ubuntu:~$ 
```

  * [2-bring_me_home](./2-bring_me_home): Bash script that changes the working directory to the 
user’s home directory.

**3. The long format**

Display current directory contents in a long format

Example:

```
$ ./3-listfiles
total 32
-rwxr-xr-x@ 1 sylvain staff 18 Jan 25 00:19 0-current_working_directory
-rwxr-xr-x@ 1 sylvain staff 19 Jan 25 00:23 1-listit
-rwxr-xr-x@ 1 sylvain staff 18 Jan 25 00:29 2-bring_me_home
-rwxr-xr-x@ 1 sylvain staff 18 Jan 25 00:39 3-listfiles
$
```

  * [3-listfiles](./3-listfiles): Bash script that displays the current directory contents in 
a long format

**4. Hidden files**

Display current directory contents, including hidden files (starting with .). Use the long format.

Example:

```
$ ./4-listmorefiles
total 32
drwxr-xr-x@ 6 sylvain staff 204 Jan 25 00:29 .
drwxr-xr-x@ 43 sylvain staff 1462 Jan 25 00:19 ..
-rwxr-xr-x@ 1 sylvain staff 18 Jan 25 00:19 0-current_working_directory
-rwxr-xr-x@ 1 sylvain staff 19 Jan 25 00:23 1-listit
-rwxr-xr-x@ 1 sylvain staff 18 Jan 25 00:29 2-bring_me_home
-rwxr-xr-x@ 1 sylvain staff 18 Jan 25 00:39 3-listfiles
-rwxr-xr-x@ 1 sylvain staff 18 Jan 25 00:41 4-listmorefiles
$
```

  * [4-listmorefiles](./4-listmorefiles): Bash Script that displays current directory contents, 
including hidden files (starting with .

**5. I love numbers**

Display current directory contents.

  * Long format
  * with user and group IDs displayed numerically
  * And hidden files (starting with .)

Example:

```
$ ./5-listfilesdigitonly
total 32
drwxr-xr-x@ 6 501 20 204 Jan 25 00:29 .
drwxr-xr-x@ 43 501 20 1462 Jan 25 00:19 ..
-rwxr-xr-x@ 1 501 20 18 Jan 25 00:19 0-current_working_directory
-rwxr-xr-x@ 1 501 20 18 Jan 25 00:23 1-listfiles
-rwxr-xr-x@ 1 501 20 19 Jan 25 00:29 2-bring_me_home
-rwxr-xr-x@ 1 501 20 20 Jan 25 00:39 3-listfiles
-rwxr-xr-x@ 1 501 20 18 Jan 25 00:41 4-listmorefiles
-rwxr-xr-x@ 1 501 20 18 Jan 25 00:43 5-listfilesdigitonly
$
```

  * [5-listfilesdigitonly](./5-listfilesdigitonly): Bash script that displays current directory 
contents in long format, with user and group IDs displayed numerically, And hidden files (starting with .)

**6. Welcome**

Create a script that creates a directory named `my_first_directory` in the `/tmp/` directory.

Example:

```
$ ./6-firstdirectory
$ file /tmp/my_first_directory/
/tmp/my_first_directory/: directory
$
```

  * [6-firstdirectory](./6-firstdirectory): Bash script that script that creates a directory 
named my_first_directory in the /tmp/ directory.

**7. Betty in my first directory**

Move the file `betty` from `/tmp/` to `/tmp/my_first_directory`.

Example:

```
$ ./7-movethatfile
$ ls /tmp/my_first_directory/
betty
$
```

  * [7-movethatfile](./7-movethatfile): Bash script for moving the file betty from /tmp/ to 
/tmp/my_first_directory.

**8. Bye bye Betty**

Delete the file betty.

  * The file betty is in /tmp/my_first_directory

Example:

```
$ ./8-firstdelete
$ ls /tmp/my_first_directory/
$
```

  * [8-firstdelete](./8-firstdelete): Bash script that deletes the file betty 
in /tmp/my_first_directory

**9. Bye bye My first directory**

Delete the directory my_first_directory that is in the /tmp directory.

Example:

```
$ ./9-firstdirdeletion
$ file /tmp/my_first_directory
/tmp/my_first_directory: cannot open `/tmp/my_first_directory' (No such file or directory)
$
```

  * [9-firstdirdeletion](./9-firstdirdeletion): Bash script that deletes the directory `my_first_directory` 
that is in the `/tmp directory`.

**10. Back to the future**

Write a script that changes the working directory to the previous one.

```
julien@ubuntu:/tmp$ pwd
/tmp
julien@ubuntu:/tmp$ cd /var
julien@ubuntu:/var$ pwd
/var
julien@ubuntu:/var$ source ./10-back
/tmp
julien@ubuntu:/tmp$ pwd
/tmp
```

  * [10-back](./10-back): Bash script that changes the working directory to the previous one.

**11. Lists**

Write a script that lists all files (even ones with names beginning with a period character, which are normally hidden) in the current 
directory and the parent of the working directory and the /boot directory (in this order), in long format.

  * [11-lists](./11-lists): Bash script that lists all files (even ones with names beginning with a period 
character, which are normally hidden) in the current directory and the parent of the working directory and 
the /boot directory (in this order), in long format.

**12. File type**

Write a script that prints the type of the file named `iamafile`. The file iamafile will be in the `/tmp` directory when we will run your script.

Example

```
ubuntu@ip-172-31-63-244:~$ ./12-file_type
/tmp/iamafile: ELF 64-bit LSB  executable, x86-64, version 1 (SYSV), dynamically linked (uses shared libs), for GNU/Linux 2.6.24, BuildID[sha1]=bd39c07194a778ccc066fc963ca152bdfaa3f971, stripped
```

  * [12-file_type](./12-file_type): Bash script that prints the type of the file named iamafile. The file 
iamafile will be in the /tmp directory when we will run your script.

**13. We are symbols, and inhabit symbols**

Create a symbolic link to `/bin/ls`, named `__ls__`. The symbolic link should be created in the current working directory.

```
ubuntu@ip-172-31-63-244:/tmp/sym$ ls -la
total 144
drwxrwxr-x  2 ubuntu ubuntu   4096 Sep 20 03:24 .
drwxrwxrwt 12 root   root   139264 Sep 20 03:24 ..
ubuntu@ip-172-31-63-244:/tmp/sym$./13-symbolic_link
ubuntu@ip-172-31-63-244:/tmp/sym$ ls -la
total 144
drwxrwxr-x  2 ubuntu ubuntu   4096 Sep 20 03:24 .
drwxrwxrwt 12 root   root   139264 Sep 20 03:24 ..
lrwxrwxrwx  1 ubuntu ubuntu      7 Sep 20 03:24 __ls__ -> /bin/ls
```

  * [13-symbolic_link](./13-symbolic_link): Bash script for creating a symbolic link to /bin/ls, 
named __ls__. in the current working directory.

**14. Copy HTML files**

Create a script that copies all the HTML files from the current working directory to the parent of the working directory, 
but only copy files that did not exist in the parent of the working directory or were newer than the versions in the parent of the working directory.

You can consider that all HTML files have the extension `.html`

  * [14-copy_html](./14-copy_html): Bash script for copying all the HTML files from the current working directory 
to the parent of the working directory, but only copy files that did not exist in the parent of the working directory 
or were newer than the versions in the parent of the working directory.

**15. Let’s move**

Create a script that moves all files beginning with an uppercase letter to the directory `/tmp/u.`

You can assume that the directory `/tmp/u` will exist when we will run your script

```
ubuntu@ip-172-31-63-244:/tmp/sym$ ls -la
total 148
drwxrwxr-x  3 ubuntu ubuntu   4096 Sep 20 03:33 .
drwxrwxrwt 12 root   root   139264 Sep 20 03:26 ..
-rw-rw-r--  1 ubuntu ubuntu      0 Sep 20 03:32 My_file
lrwxrwxrwx  1 ubuntu ubuntu      7 Sep 20 03:24 __ls__ -> /bin/ls
-rw-rw-r--  1 ubuntu ubuntu      0 Sep 20 03:32 Elif_ym
-rw-rw-r--  1 ubuntu ubuntu      0 Sep 20 03:32 random_file
ubuntu@ip-172-31-63-244:/tmp/sym$ ls -la /tmp/u
total 8
drwxrwxr-x 2 ubuntu ubuntu 4096 Sep 20 03:33 .
drwxrwxr-x 3 ubuntu ubuntu 4096 Sep 20 03:33 ..
ubuntu@ip-172-31-63-244:/tmp/sym$ ./100-lets_move
ubuntu@ip-172-31-63-244:/tmp/sym$ ls -la
total 148
drwxrwxr-x  3 ubuntu ubuntu   4096 Sep 20 03:33 .
drwxrwxrwt 12 root   root   139264 Sep 20 03:26 ..
lrwxrwxrwx  1 ubuntu ubuntu      7 Sep 20 03:24 __ls__ -> /bin/ls
-rw-rw-r--  1 ubuntu ubuntu      0 Sep 20 03:32 random_file
ubuntu@ip-172-31-63-244:/tmp/sym$ ls -la /tmp/u
total 8
drwxrwxr-x 2 ubuntu ubuntu 4096 Sep 20 03:33 .
drwxrwxr-x 3 ubuntu ubuntu 4096 Sep 20 03:33 ..
-rw-rw-r-- 1 ubuntu ubuntu    0 Sep 20 03:32 My_file
-rw-rw-r-- 1 ubuntu ubuntu    0 Sep 20 03:32 Elif_ym
```

  * [100-lets_move](./100-lets_move): Bash script that moves all files beginning with an uppercase letter to the 
directory /tmp/u. Assuming that the directory /tmp/u will exist when we will run your script

**16. Clean Emacs**

Create a script that deletes all files in the current working directory that end with the character `~.`

```
ubuntu@ip-172-31-63-244:/tmp/sym$ ls
main.c  main.c~  Makefile~
ubuntu@ip-172-31-63-244:/tmp/sym$ ./101-clean_emacs
ubuntu@ip-172-31-63-244:/tmp/emacs$ ls
main.c
ubuntu@ip-172-31-63-244:/tmp/emacs$
```

  * [101-clean_emacs](./101-clean_emacs): Bash script that deletes all files in the current working directory that 
end with the character ~.

**17. Tree**

Create a script that creates the directories `welcome/`, `welcome/to/` and `welcome/to/school` in the current directory.

You are only allowed to use two spaces (and lines) in your script, not more.

```
julien@ubuntu:/tmp/h$ ls -l
total 4
-rwxrw-r-- 1 julien julien 44 Sep 20 12:09 102-tree
julien@ubuntu:/tmp/h$ wc -l 102-tree 
2 102-tree
julien@ubuntu:/tmp/h$ head -1 102-tree 
#!/bin/bash
julien@ubuntu:/tmp/h$ tr -cd ' ' < 102-tree | wc -c # you do not have to understand this yet, but the result should be 2, 1 or 0
2
julien@ubuntu:/tmp/h$ ./102-tree 
julien@ubuntu:/tmp/h$ ls
102-tree  welcome
julien@ubuntu:/tmp/h$ ls welcome/
to
julien@ubuntu:/tmp/h$ ls -l welcome/to
total 4
drwxrwxr-x 2 julien julien 4096 Sep 20 12:11 school
julien@ubuntu:/tmp/h$ 
```

  * [102-tree](./102-tree): Bash script that creates the directories welcome/, welcome/to/ and welcome/to/school 
in the current directory

**18. Life is a series of commas, not periods**

Write a command that lists all the files and directories of the current directory, separated by commas (,).

  * Directory names should end with a slash (/)
  * Files and directories starting with a dot (.) should be listed
  * The listing should be alpha ordered, except for the directories . and .. which should be listed at the very beginning
  * Only digits and letters are used to sort; Digits should come first
  * You can assume that all the files we will test with will have at least one letter or one digit
  * The listing should end with a new line

```
ubuntu@ubuntu:~/$ ls -a

.  ..  0-commas  0-commas-checks  1-empty_casks  2-gifs  3-directories  4-zeros  5-rot13  6-odd  7-sort_rot13  Makefile  quote  .test  test_dir  test.var

ubuntu@ubuntu:~/$ ./103-commas

./, ../, 0-commas, 0-commas-checks/, 1-empty_casks, 2-gifs, 3-directories, 4-zeros, 5-rot13, 6-odd, 7-sort_rot13, Makefile, quote, .test, test_dir/, test.var

ubuntu@ubuntu:~/$
```

  * [103-commas](./103-commas): Bash script that  lists all the files and directories of the current directory, 
separated by commas (,).

   * Directory names should end with a slash (/)
   * Files and directories starting with a dot (.) should be listed
   * The listing should be alpha ordered, except for the directories . and .. which should be listed at the very beginning
   * Only digits and letters are used to sort; Digits should come first
   * You can assume that all the files we will test with will have at least one letter or one digit
   * The listing should end with a new line

**19. File type: School**

Create a magic file `school.mgc` that can be used with the command `file` to detect `School` data files. `School` data files always contain the string `SCHOOL` at offset 0.

```
ubuntu@ip-172-31-63-244:/tmp/magic$ cp /bin/ls .
ubuntu@ip-172-31-63-244:/tmp/magic$ ls -la
total 268
drwxrwxr-x  2 ubuntu ubuntu   4096 Sep 20 02:44 .
drwxrwxrwt 11 root   root   139264 Sep 20 02:44 ..
-rw-r--r--  1 ubuntu ubuntu    496 Sep 20 02:42 school.mgc
-rwxr-xr-x  1 ubuntu ubuntu 110080 Sep 20 02:43 ls
-rw-rw-r--  1 ubuntu ubuntu     50 Sep 20 02:06 thisisaschoolfile
-rw-rw-r--  1 ubuntu ubuntu     30 Sep 20 02:16 thisisatextfile
ubuntu@ip-172-31-63-244:/tmp/magic$ file --mime-type -m school.mgc *
school.mgc:         application/octet-stream
ls:                    application/octet-stream
thisisaschoolfile: School
thisisatextfile:       text/plain
ubuntu@ip-172-31-63-244:/tmp/magic$ file -m school.mgc *
school.mgc:         data
ls:                    data
thisisaschoolfile: School data
thisisatextfile:       ASCII text
ubuntu@ip-172-31-63-244:/tmp/magic$
```

  * [school.mgc](./school.mgc): Create a magic file school.mgc that can be used with the command file to detect School data 
files. School data files always contain the string SCHOOL at offset 0.


## 0x00. Shell, basics Quizes
  * [0x00. Shell, basics Quizes](https://drive.google.com/file/d/18tYmuO7JANAmK9rex5GOFZFKdQCxfu7D/view?usp=sharing)

## Additional Project Resources
  * [What Is “The Shell”?](https://linuxcommand.org/lc3_lts0010.php)
  * [Navigation](https://linuxcommand.org/lc3_lts0020.php)
  * [Looking Around](http://linuxcommand.org/lc3_lts0030.php)
  * [A Guided Tour](http://linuxcommand.org/lc3_lts0040.php)
  * [Manipulating Files](http://linuxcommand.org/lc3_lts0050.php)
  * [Working with Commands](http://linuxcommand.org/lc3_lts0060.php)
  * [Reading Man pages](http://linuxcommand.org/lc3_man_pages/man1.html)
  * [Keyboard shortcuts for Bash](https://www.howtogeek.com/181/keyboard-shortcuts-for-bash-command-shell-for-ubuntu-debian-suse-redhat-linux-etc/)
  * [LTS](https://wiki.ubuntu.com/LTS)
  * [Shebang](https://en.wikipedia.org/wiki/Shebang_%28Unix%29)

