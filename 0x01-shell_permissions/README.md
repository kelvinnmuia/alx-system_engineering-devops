# 0x01. Shell, permissions
## The Domains/Concepts covered in this project: `DevOps`  `Shell`  `Bash`


In this project, I learned about commands for managing permissions in shell, 
such as `chmod` for changing file permissions, `chgrp` used for changing group 
permissions, as well as `sudo`, `su` which manages user access permissions. 
I learned other permission management commands such as `id`, `groups`, `whoami`, 
`adduser`, `useradd`, `addgroup`.

## Project Tasks :page_with_curl:

**0. My name is Betty**

Create a script that switches the current user to the user `betty`.

  * You should use exactly 8 characters for your command (+1 character for the new line)
  * You can assume that the user `betty` will exist when we will run your script

```
julien@ubuntu:/tmp/h$ tail -1 0-iam_betty | wc -c
9
julien@ubuntu:/tmp/h$
```

  * [0-iam_betty](./0-iam_betty): Bash script that switches the current user to 
the user betty.

**1. Who am I**

Write a script that prints the effective username of the current user.

```
julien@ubuntu:/tmp/h$ ./1-who_am_i
julien
julien@ubuntu:/tmp/h$
```

  * [1-who_am_i](./1-who_am_i): Bash script that prints the effective username of 
the current user.

**2. Groups**

Write a script that prints all the groups the current user is part of.

```
julien@ubuntu:/tmp/h$ ./2-groups
julien adm cdrom sudo dip plugdev lpadmin sambashare
julien@ubuntu:/tmp/h$ 
```

  * [2-groups](./2-groups): Bash script that prints all the groups the current 
user is part of.

**3. New owner**

Write a script that changes the owner of the file `hello` to the user `betty`.

```
julien@ubuntu:/tmp/h$ ls -l
total 4
-rwxrw-r-- 1 julien julien 30 Sep 20 14:23 3-new_owner
-rw-rw-r-- 1 julien julien  0 Sep 20 14:18 hello
julien@ubuntu:/tmp/h$ sudo ./3-new_owner 
julien@ubuntu:/tmp/h$ ls -l
total 4
-rwxrw-r-- 1 julien julien 30 Sep 20 14:23 3-new_owner
-rw-rw-r-- 1 betty  julien  0 Sep 20 14:18 hello
julien@ubuntu:/tmp/h$
```

  * [3-new_owner](./3-new_owner): Bash script that changes the owner of the file 
hello to the user betty.

**4. Empty!**

Write a script that creates an empty file called `hello`.

  * [4-empty](./4-empty): Bash script that creates an empty file called hello.

**5. Execute**

Write a script that adds execute permission to the owner of the file `hello`.

  * The file `hello` will be in the working directory

```
julien@ubuntu:/tmp/h$ ls -l
total 8
-rwxrw-r-- 1 julien julien 28 Sep 20 14:26 5-execute
-rw-rw-r-- 1 julien julien 23 Sep 20 14:25 hello
julien@ubuntu:/tmp/h$ ./hello
bash: ./hello: Permission denied
julien@ubuntu:/tmp/h$ ./5-execute 
julien@ubuntu:/tmp/h$ ls -l
total 8
-rwxrw-r-- 1 julien julien 28 Sep 20 14:26 5-execute
-rwxrw-r-- 1 julien julien 23 Sep 20 14:25 hello
julien@ubuntu:/tmp/h$ 
```

  * [5-execute](./5-execute): Bash script that adds execute permission to the owner 
of the file hello. In  the working directory

**6. Multiple permissions**

Write a script that adds execute permission to the owner and the group owner, and read permission to other users, to the file `hello`.

  * The file `hello` will be in the working directory

```
julien@ubuntu:/tmp/h$ ls -l
total 8
-rwxrw-r-- 1 julien julien 36 Sep 20 14:31 6-multiple_permissions
-r--r----- 1 julien julien 23 Sep 20 14:25 hello
julien@ubuntu:/tmp/h$ ./6-multiple_permissions 
julien@ubuntu:/tmp/h$ ls -l
total 8
-rwxrw-r-- 1 julien julien 36 Sep 20 14:31 6-multiple_permissions
-r-xr-xr-- 1 julien julien 23 Sep 20 14:25 hello
julien@ubuntu:/tmp/h$ 
```

  * [6-multiple_permissions](./6-multiple_permissions): Bash script that adds execute 
permission to the owner and the group owner, and read permission to other users, 
to the file hello. In the working directory.

**7. Everybody!**

Write a script that adds execution permission to the owner, the group owner and the other users, to the file `hello`

  * The file `hello` will be in the working directory
  * You are not allowed to use commas for this script

```
julien@ubuntu:/tmp/h$ ls -l
total 8
-rwxrw-r-- 1 julien julien 28 Sep 20 14:35 7-everybody
-rw-r----- 1 julien julien 23 Sep 20 14:25 hello
julien@ubuntu:/tmp/h$ ./7-everybody 
julien@ubuntu:/tmp/h$ ls -l
total 8
-rwxrw-r-- 1 julien julien 28 Sep 20 14:35 7-everybody
-rwxr-x--x 1 julien julien 23 Sep 20 14:25 hello
julien@ubuntu:/tmp/h$ 
```

  * [7-everybody](./7-everybody): Bash script that adds execution permission to the owner, 
the group owner and the other users, to the file hello

	* The file hello will be in the working directory
	* Not allowed to use commas for the script

**8. James Bond**

Write a script that sets the permission to the file hello as follows:

  * Owner: no permission at all
  * Group: no permission at all
  * Other users: all the permissions

The file `hello` will be in the working directory You are not allowed to use commas for this script

```
julien@ubuntu:/tmp/h$ ls -l
total 8
-rwxrw-r-- 1 julien julien 28 Sep 20 14:40 8-James_Bond
-rwxr-x--x 1 julien julien 23 Sep 20 14:25 hello
julien@ubuntu:/tmp/h$ ./8-James_Bond 
julien@ubuntu:/tmp/h$ ls -l
total 8
-rwxrw-r-- 1 julien julien 28 Sep 20 14:40 8-James_Bond
-------rwx 1 julien julien 23 Sep 20 14:25 hello
julien@ubuntu:/tmp/h$ 
```

  * [8-James_Bond](./8-James_Bond): Bash script that sets the permission to the file hello as follows:
	* Owner: no permission at all
	* Group: no permission at all
	* Other users: all the permissions
  * The file hello will be in the working directory 
  * Not allowed to use commas for this script

**9. John Doe**

Write a script that sets the mode of the file hello to this:

`-rwxr-x-wx 1 julien julien 23 Sep 20 14:25 hello`
  * The file `hello` will be in the working directory
  * You are not allowed to use commas for this script

  * [9-John_Doe](./9-John_Doe): Bash script that sets the mode of the file hello to this:

  `-rwxr-x-wx 1 julien julien 23 Sep 20 14:25 hello`
  * The file hello will be in the working directory
  * Not allowed to use commas for this script

**10. Look in the mirror**

Write a script that sets the mode of the file `hello` the same as `olleh’s` mode.

  * The file `hello` will be in the working directory
  * The file `olleh` will be in the working directory

```
julien@ubuntu:/tmp/h$ ls -l
total 8
-rwxrw-r-- 1 julien julien 42 Sep 20 14:45 10-mirror_permissions
-rwxr-x-wx 1 julien julien 23 Sep 20 14:25 hello
-rw-rw-r-- 1 julien julien  0 Sep 20 14:43 olleh
julien@ubuntu:/tmp/h$ ./10-mirror_permissions 
julien@ubuntu:/tmp/h$ ls -l
total 8
-rwxrw-r-- 1 julien julien 42 Sep 20 14:45 10-mirror_permissions
-rw-rw-r-- 1 julien julien 23 Sep 20 14:25 hello
-rw-rw-r-- 1 julien julien  0 Sep 20 14:43 olleh
julien@ubuntu:/tmp/h$ 
```

Note: the mode of `olleh` will not always be 664. Make sure your script works for any mode.

  * [10-mirror_permissions](./10-mirror_permissions): Bash script that sets the mode of the file hello 
the same as olleh’s mode.

  * The file hello will be in the working directory
  * The file olleh will be in the working directory
  * **Note:** the mode of olleh will not always be 664. 
  * The script should work for any mode.

**11. Directories**

Create a script that adds execute permission to all subdirectories of the current directory for the owner, the 
group owner and all other users.

Regular files should not be changed.

```
julien@ubuntu:/tmp/h$ ls -l
total 20
-rwxrwxr-x 1 julien julien   24 Sep 20 14:53 11-directories_permissions
drwx------ 2 julien julien 4096 Sep 20 14:49 dir0
drwx------ 2 julien julien 4096 Sep 20 14:49 dir1
drwx------ 2 julien julien 4096 Sep 20 14:49 dir2
-rw-rw-r-- 1 julien julien   23 Sep 20 14:25 hello
julien@ubuntu:/tmp/h$ ./11-directories_permissions 
julien@ubuntu:/tmp/h$ ls -l
total 20
-rwxrwxr-x 1 julien julien   24 Sep 20 14:53 11-directories_permissions
drwx--x--x 2 julien julien 4096 Sep 20 14:49 dir0
drwx--x--x 2 julien julien 4096 Sep 20 14:49 dir1
drwx--x--x 2 julien julien 4096 Sep 20 14:49 dir2
-rw-rw-r-- 1 julien julien   23 Sep 20 14:25 hello
julien@ubuntu:/tmp/h$ 
```

  * [11-directories_permissions](./11-directories_permissions): Bash script that adds execute permission to 
all subdirectories of the current directory for the owner, the group owner and all other users.

  * Regular files should not be changed.

**12. More directories**

Create a script that creates a directory called `my_dir` with permissions 751 in the working directory.

```
julien@ubuntu:/tmp/h$ ls -l
total 20
-rwxrwxr-x 1 julien julien   39 Sep 20 14:59 12-directory_permissions
drwx--x--x 2 julien julien 4096 Sep 20 14:49 dir0
drwx--x--x 2 julien julien 4096 Sep 20 14:49 dir1
drwx--x--x 2 julien julien 4096 Sep 20 14:49 dir2
-rw-rw-r-- 1 julien julien   23 Sep 20 14:25 hello
julien@ubuntu:/tmp/h$ ./12-directory_permission s
julien@ubuntu:/tmp/h$ ls -l
total 24
-rwxrwxr-x 1 julien julien   39 Sep 20 14:59 12-directory_permissions
drwx--x--x 2 julien julien 4096 Sep 20 14:49 dir0
drwx--x--x 2 julien julien 4096 Sep 20 14:49 dir1
drwx--x--x 2 julien julien 4096 Sep 20 14:49 dir2
drwxr-x--x 2 julien julien 4096 Sep 20 14:59 my_dir
-rw-rw-r-- 1 julien julien   23 Sep 20 14:25 hello
julien@ubuntu:/tmp/h$ 
```

  * [12-directory_permissions](./12-directory_permissions): Bash script that creates a directory called 
my_dir with permissions 751 in the working directory.

**13. Change group**

Write a script that changes the group owner to `school` for the file `hello`

  * The file `hello` will be in the working directory

```
julien@ubuntu:/tmp/h$ ls -l
total 24
-rwxrwxr-x 1 julien julien   34 Sep 20 15:03 13-change_group
drwx--x--x 2 julien julien 4096 Sep 20 14:49 dir0
drwx--x--x 2 julien julien 4096 Sep 20 14:49 dir1
drwx--x--x 2 julien julien 4096 Sep 20 14:49 dir2
drwxr-x--x 2 julien julien 4096 Sep 20 14:59 my_dir
-rw-rw-r-- 1 julien julien   23 Sep 20 14:25 hello
julien@ubuntu:/tmp/h$ sudo ./13-change_group 
julien@ubuntu:/tmp/h$ ls -l
total 24
-rwxrwxr-x 1 julien julien      34 Sep 20 15:03 13-change_group
drwx--x--x 2 julien julien    4096 Sep 20 14:49 dir0
drwx--x--x 2 julien julien    4096 Sep 20 14:49 dir1
drwx--x--x 2 julien julien    4096 Sep 20 14:49 dir2
drwxr-x--x 2 julien julien    4096 Sep 20 14:59 my_dir
-rw-rw-r-- 1 julien school   23 Sep 20 14:25 hello
julien@ubuntu:/tmp/h$ 
```

  * [13-change_group](./13-change_group): Bash script that changes the group owner to school for the file hello

  * The file hello will be in the working directory

**14. Owner and group**

Write a script that changes the owner to `vincent` and the group owner to `staff` for all the files and directories
 in the working directory.

```
julien@ubuntu:/tmp/h$ ls -l
total 24
-rwxrwxr-x 1 julien julien   36 Sep 20 15:06 100-change_owner_and_group
drwx--x--x 2 julien julien 4096 Sep 20 14:49 dir0
drwx--x--x 2 julien julien 4096 Sep 20 14:49 dir1
drwx--x--x 2 julien julien 4096 Sep 20 14:49 dir2
drwxr-x--x 2 julien julien 4096 Sep 20 14:59 my_dir
-rw-rw-r-- 1 julien julien   23 Sep 20 14:25 hello
julien@ubuntu:/tmp/h$ sudo ./100-change_owner_and_group 
julien@ubuntu:/tmp/h$ ls -l
total 24
-rwxrwxr-x 1 vincent staff   36 Sep 20 15:06 100-change_owner_and_group
drwx--x--x 2 vincent staff 4096 Sep 20 14:49 dir0
drwx--x--x 2 vincent staff 4096 Sep 20 14:49 dir1
drwx--x--x 2 vincent staff 4096 Sep 20 14:49 dir2
drwxr-x--x 2 vincent staff 4096 Sep 20 14:59 my_dir
-rw-rw-r-- 1 vincent staff   23 Sep 20 14:25 hello
julien@ubuntu:/tmp/h$ 
```

  * [100-change_owner_and_group](./100-change_owner_and_group): Bash script that changes the owner to vincent and 
the group owner to staff for all the files and directories in the working directory.

**15. Symbolic links**

Write a script that changes the owner and the group owner of `_hello` to `vincent` and `staff` respectively.

  * The file `_hello` is in the working directory
  * The file `_hello` is a symbolic link

```
julien@ubuntu:/tmp/h$ ls -l
total 24
-rwxrwxr-x 1 julien julien   44 Sep 20 15:12 101-symbolic_link_permissions
-rw-rw-r-- 1 julien julien   23 Sep 20 14:25 hello
lrwxrwxrwx 1 julien julien    5 Sep 20 15:10 _hello -> hello
julien@ubuntu:/tmp/h$ sudo ./101-symbolic_link_permissions 
julien@ubuntu:/tmp/h$ ls -l
total 24
-rwxrwxr-x 1 julien julien      44 Sep 20 15:12 101-symbolic_link_permissions
-rw-rw-r-- 1 julien julien      23 Sep 20 14:25 hello
lrwxrwxrwx 1 vincent  staff    5 Sep 20 15:10 _hello -> hello
julien@ubuntu:/tmp/h$ 
```

  * [101-symbolic_link_permissions](./101-symbolic_link_permissions): Bash script that the owner and the group owner 
of `_hello` to `vincent` and `staff` respectively.

  * The file `_hello` is in the working directory
  * The file `_hello` is a symbolic link

**16. If only**

Write a script that changes the owner of the file `hello` to `betty` only if it is owned by the user `guillaume`.

  * The file `hello` will be in the working directory

```
julien@ubuntu:/tmp/h$ ls -l
total 24
-rwxrwxr-x 1 julien    julien      47 Sep 20 15:18 102-if_only 
-rw-rw-r-- 1 guillaume julien      23 Sep 20 14:25 hello
julien@ubuntu:/tmp/h$ sudo ./102-if_only 
julien@ubuntu:/tmp/h$ ls -l
total 24
-rwxrwxr-x 1 julien julien      47 Sep 20 15:18 102-if_only 
-rw-rw-r-- 1 betty  julien      23 Sep 20 14:25 hello
julien@ubuntu:/tmp/h$ 
```

  * [102-if_only](./102-if_only): Bash scrip that changes the owner of the file hello to betty only if it is owned by 
the user guillaume.

  * The file hello will be in the working directory

**17. Star Wars**

Write a script that will play the StarWars IV episode in the terminal.


  * [103-Star_Wars](./103-Star_Wars): Bash script that will play the StarWars IV episode in the terminal.

## 0x01. Shell, permissions Quizes
  * [0x01. Shell, permissions Quizes](https://drive.google.com/file/d/1LfsLueyy3m1oNaIic59BXfWzx8RwdDS3/view?usp=sharing)

## Additional Project Resources
  * [Permissions](https://linuxcommand.org/lc3_lts0090.php)
