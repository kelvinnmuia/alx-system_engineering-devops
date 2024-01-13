# 0x0D. Web stack debugging #0
## The Domains/Concepts covered in this project: `DevOps` `SysAdmin` `Scripting` `Debugging`

The project introduced me into debugging broken or bugged webstacks. I Learned create bash 
scripts that once executed, brings back the webstack to a working state. 

Let’s start with a very simple example. My server must:

* have a copy of the `/etc/passwd` file in `/tmp`
* have a file named `/tmp/isworking` containing the string `OK`

Let’s pretend that without these 2 elements, my web application cannot work.

Let’s go through this example and fix the server.

```
vagrant@vagrant:~$ docker run -d -ti ubuntu:14.04
Unable to find image 'ubuntu:14.04' locally
14.04: Pulling from library/ubuntu
34667c7e4631: Already exists
d18d76a881a4: Already exists
119c7358fbfc: Already exists
2aaf13f3eff0: Already exists
Digest: sha256:58d0da8bc2f434983c6ca4713b08be00ff5586eb5cdff47bcde4b2e88fd40f88
Status: Downloaded newer image for ubuntu:14.04
76f44c0da25e1fdf6bcd4fbc49f4d7b658aba89684080ea5d6e8a0d832be9ff9
vagrant@vagrant:~$ docker ps
CONTAINER ID        IMAGE               COMMAND             CREATED             STATUS              PORTS               NAMES
76f44c0da25e        ubuntu:14.04        "/bin/bash"         13 seconds ago      Up 12 seconds                           infallible_bhabha
vagrant@vagrant:~$ docker exec -ti 76f44c0da25e /bin/bash
root@76f44c0da25e:/# ls /tmp/
root@76f44c0da25e:/# cp /etc/passwd /tmp/
root@76f44c0da25e:/# echo OK > /tmp/isworking
root@76f44c0da25e:/# ls /tmp/
isworking  passwd
root@76f44c0da25e:/#
vagrant@vagrant:~$
```
Then my answer file would contain:

```
sylvain@ubuntu:~$ cat answerfile
#!/usr/bin/env bash
# Fix my server with these magic 2 lines
cp /etc/passwd /tmp/
echo OK > /tmp/isworking
sylvain@ubuntu:~$
```
## Tasks :page_with_curl:

**0. Give me a page!**

Be sure to read the *Docker* concept page

In this first debugging project, you will need to get Apache to run on the container and 
to return a page containing `Hello Holberton` when querying the root of it.

Example:

```
vagrant@vagrant:~$ docker run -p 8080:80 -d -it holbertonschool/265-0
47ca3994a4910bbc29d1d8925b1c70e1bdd799f5442040365a7cb9a0db218021
vagrant@vagrant:~$ docker ps
CONTAINER ID        IMAGE                   COMMAND             CREATED             STATUS              PORTS                  NAMES
47ca3994a491        holbertonschool/265-0   "/bin/bash"         3 seconds ago       Up 2 seconds        0.0.0.0:8080->80/tcp   vigilant_tesla
vagrant@vagrant:~$ curl 0:8080
curl: (52) Empty reply from server
vagrant@vagrant:~$
```

Here we can see that after starting my Docker container, I `curl` the port `8080` mapped to the Docker 
container port `80`, it does not return a page but an error message. Note that you might also get 
the error message `curl: (52) Empty reply from server.`

```
vagrant@vagrant:~$ curl 0:8080
Hello Holberton
vagrant@vagrant:~$
```

After connecting to the container and fixing whatever needed to be fixed (here is your mission), 
you can see that curling port 80 return a page that contains Hello Holberton. Paste the command(s) 
you used to fix the issue in your answer file.

  * [0-give_me_a_page](./0-give_me_a_page): Bash Script that fixes a docker container to return a 
webpage and an error message.

## Additional Project Resources
* [Docker](https://docs.google.com/document/d/1JCu501t3-HIXVPhAK3eDEYRFMNkUd-jbYNNBEvO6FpE/edit?usp=sharing)
* [What is a protocol](https://www.techtarget.com/searchnetworking/definition/protocol)
* [What is an IP address](https://computer.howstuffworks.com/internet/basics/what-is-an-ip-address.htm)
* [What is TCP/IP](https://www.avast.com/c-what-is-tcp-ip#)
* [What is an Internet Protocol (IP) port?](https://www.lifewire.com/port-numbers-on-computer-networks-817939)
