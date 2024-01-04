# 0x0B. SSH

The project introduced me into two important concepts, `ssh` and `ssh-keygen`. I learned 
how to generate ssh keys and connect to remote servers with ssh, as well as creating bash 
scripts that automate ssh connections and generate ssh keys.

## Tasks :page_with_curl:

* **0. Use a private key**

Write a Bash script that uses ssh to connect to your server using the private key ~/.ssh/school with the user ubuntu.

Requirements:

* Only use ssh single-character flags
* You cannot use -l
* You do not need to handle the case of a private key protected by a passphrase

```
sylvain@ubuntu$ ./0-use_a_private_key
ubuntu@server01:~$ exit
Connection to 8.8.8.8 closed.
sylvain@ubuntu$ 
```
  * [0-use_a_private_key](./0-use_a_private_key): Bash script that uses `ssh` to connect to my 
remote servers provided by alx.

* **1. Create an SSH key pair**

Write a Bash script that creates an RSA key pair.

Requirements:

* Name of the created private key must be school
* Number of bits in the created key to be created 4096
* The created key must be protected by the passphrase `betty`

  * [1-create_ssh_key_pair](./1-create_ssh_key_pair): Bash script that creates an RSA key pair.

* **2. Client configuration file**


  * [2-ssh_config](./2-ssh_config): SSH configuration file configured to use the private key
`~/.ssh/holberton` and to refuse authentication using a password.
