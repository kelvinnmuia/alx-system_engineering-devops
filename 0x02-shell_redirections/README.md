# 0x02. Shell, I/O Redirections and filters

In this project, I learned about shell commands for performing Input/Output Redirections 
and filtering output. This commands include but not limited to: `head`, `tail`, `find`, 
`wc`, `sort`, `uniq`, `grep` and `tr`

## Project Tasks :page_with_curl:

**0. Hello World**
  * [0-hello_world](./0-hello_world): Bash script that prints “Hello, World”, followed by 
a new line to the standard output.

**1. Confused smiley**
  * [1-confused_smiley](./1-confused_smiley): Bash script that displays a confused smiley "(Ôo)'.

**2. Let's display a file**
  * [2-hellofile](./2-hellofile): Bash script that displays the content of the /etc/passwd file.

**3. What about 2?**
  * [3-twofiles](./3-twofiles): Bash script that displays the content of /etc/passwd and /etc/hosts

**4. Last lines of a file**
  * [4-lastlines](./4-lastlines): Bash script that displays the last 10 lines of /etc/passwd

**5. I'd prefer the first ones actually**
  * [5-firstlines](./5-firstlines): Bash script that displays the first 10 lines of /etc/passwd

**6. Line #2**
  * [6-third_line](./6-third_line): Bash script that displays the third line of the file iacta.

  * The file iacta will be in the working directory
  * Not allowed to use sed

**7. It is a good file that cuts iron without making a noise mandatory**
  * [7-file](./7-file): Bash script that creates a file named exactly \*\\'"Best School"\'\\*$\?\*\*\*\*\*:) 
containing the text Best School ending by a new line.

**8. Save current state of directory mandatory**
  * [8-cwd_state](./8-cwd_state): Bash script that writes into the file ls_cwd_content the result of the command 
ls -la. If the file ls_cwd_content already exists, it should be overwritten. If the file ls_cwd_content does not 
exist, create it.

**9. Duplicate last line**
  * [9-duplicate_last_line](./9-duplicate_last_line): Bash script that duplicates the last line of the file iacta

  * The file iacta will be in the working directory

**10. No more javascript**
  * [10-no_more_js](./10-no_more_js): Bash script that deletes all the regular files (not the directories) with a 
.js extension that are present in the current directory and all its subfolders.

**11. Don't just count your directories, make your directories count**
  * [11-directories](./11-directories): Bash script that  counts the number of directories and sub-directories in 
the current directory.

  * The current and parent directories should not be taken into account
  * Hidden directories should be counted

**12. What’s new**
  * [12-newest_files](./12-newest_files): Bash script that displays the 10 newest files in the current directory.

  **Requirements:**

	* One file per line
	* Sorted from the newest to the oldest

**13. Being unique is better than being perfect**
  * [13-unique](./13-unique): Bash script that takes a list of words as input and prints only words that appear 
exactly once.

  * Input format: One line, one word
  * Output format: One line, one word
  * Words should be sorted

**14. It must be in that file**
  * [14-findthatword](./14-findthatword): Bash script that displays lines containing the pattern “root” from the 
file /etc/passwd

**15. Count that word**
  * [15-countthatword](./15-countthatword): Bash script that displays the number of lines that contain the pattern 
“bin” in the file /etc/passwd

**16. What's next?**
  * [16-whatsnext](./16-whatsnext): Bash script that displays lines containing the pattern “root” and 3 lines after 
them in the file /etc/passwd.

**17. I hate bins mandatory**
  * [17-hidethisword](./17-hidethisword): Bash script that displays all the lines in the file /etc/passwd that do not 
contain the pattern “bin”.

**15. Count that word**
  * [15-countthatword](./15-countthatword): Bash script that displays the number of lines that contain the pattern 
“bin” in the file /etc/passwd

**15. Count that word**
  * [15-countthatword](./15-countthatword): Bash script that displays the number of lines that contain the pattern 
“bin” in the file /etc/passwd
