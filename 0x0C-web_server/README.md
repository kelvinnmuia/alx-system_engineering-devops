# 0x0C. Web server

The project introduced me into nginx web server. I learned 
how to install, configure and work with nginx web server, as well as creating bash 
and puppet scripts that automate the installation, configuration, and publishing of 
webpages on the nginx web server.

## Tasks :page_with_curl:

**0. Transfer a file to your server**

Write a Bash script that transfers a file from our client to a server:

Requirements:

* Accepts 4 parameters
	1. The path to the file to be transferred
	2. The IP of the server we want to transfer the file to
	3. The username `scp` connects with
	4. The path to the SSH private key that `scp` uses
* Display `Usage: 0-transfer_file PATH_TO_FILE IP USERNAME PATH_TO_SSH_KEY` if less than 3 parameters passed
* `scp` must transfer the file to the user home directory `~/`
* Strict host key checking must be disabled when using `scp`

Example:
```
sylvain@ubuntu$ ./0-transfer_file
Usage: 0-transfer_file PATH_TO_FILE IP USERNAME PATH_TO_SSH_KEY
sylvain@ubuntu$
sylvain@ubuntu$ ssh ubuntu@8.8.8.8 -i /vagrant/sylvain 'ls ~/'
afile
sylvain@ubuntu$ 
sylvain@ubuntu$ touch some_page.html
sylvain@ubuntu$ ./0-transfer_file some_page.html 8.8.8.8 sylvain /vagrant/private_key
some_page.html                                     100%   12     0.1KB/s   00:00
sylvain@ubuntu$ ssh ubuntu@8.8.8.8 -i /vagrant/private_key 'ls ~/'
afile
some_page.html
sylvain@ubuntu$
```

In this example, I:

remotely execute the `ls ~/` command via `ssh` to see what `~/` contains
create a file named `some_page.html`
execute my `0-transfer_file` script
remotely execute the `ls ~/` command via `ssh` to see that the file `some_page.html` has been successfully transferred

That is one way of publishing your website pages to your server.
  * [0-transfer_file](./0-transfer_file): Bash script that transfers a file from the client to the web server.

