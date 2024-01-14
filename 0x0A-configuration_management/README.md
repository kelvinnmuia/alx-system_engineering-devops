# 0x0A. Configuration management
## The Domains/Concepts covered in this project: `DevOps` `SysAdmin` `Scripting` `CI/CD`

The project introduced me to the following concepts `Automation Tools` `Configuration Management` `CI/CD` 
pipeline. I learned how to use and work with `puppet`, which is one of the most popular IT Automation and 
Configuration Management Tools to provision new servers into web stacks.

## Installing Puppet

**Note:** Your Ubuntu 20.04 VM should have Puppet 5.5 preinstalled.

**Install** `puppet`

```
$ apt-get install -y ruby=1:2.7+1 --allow-downgrades
$ apt-get install -y ruby-augeas
$ apt-get install -y ruby-shadow
$ apt-get install -y puppet
```

**Install** `puppet-lint`

```
$ gem install puppet-lint
```

## Tasks :page_with_curl:

**0. Create a file**

Using Puppet, create a file in `/tmp.`

Requirements:

* File path is `/tmp/school`
* File permission is `0744`
* File owner is `www-data`
* File group is `www-data`
* File contains `I love Puppet`

Example:

```
root@6712bef7a528:~# puppet-lint --version
puppet-lint 2.5.2
root@6712bef7a528:~# puppet-lint 0-create_a_file.pp
root@6712bef7a528:~# 
root@6712bef7a528:~# puppet apply 0-create_a_file.pp
Notice: Compiled catalog for 6712bef7a528.ec2.internal in environment production in 0.04 seconds
Notice: /Stage[main]/Main/File[school]/ensure: defined content as '{md5}f1b70c2a42a98d82224986a612400db9'
Notice: Finished catalog run in 0.03 seconds
root@6712bef7a528:~#
root@6712bef7a528:~# ls -l /tmp/school
-rwxr--r-- 1 www-data www-data 13 Mar 19 23:12 /tmp/school
root@6712bef7a528:~# cat /tmp/school
I love Puppetroot@6712bef7a528:~#
```

  * [0-create_a_file.pp](./0-create_a_file.pp): Puppet script for creating and setting permissions to a file

**1. Install a package**

Using Puppet, install `flask` from `pip3`.

Requirements:

* Install `flask`
* Version must be `2.1.0`

Example:

```
root@9665f0a47391:/# puppet apply 1-install_a_package.pp
Notice: Compiled catalog for 9665f0a47391 in environment production in 0.14 seconds
Notice: /Stage[main]/Main/Package[Flask]/ensure: created
Notice: Applied catalog in 0.20 seconds
root@9665f0a47391:/# flask --version
Python 3.8.10
Flask 2.1.0
Werkzeug 2.1.1
```

  * [1-install_a_package.pp](1-install_a_package.pp): Puppet script for installing Flask

**2. Execute a command**

Using Puppet, create a manifest that kills a process named `killmenow`.

Requirements:

* Must use the exec Puppet resource
* Must use `pkill`

Example:

**Terminal #0 - starting my process**

```
root@d391259bf577:/# cat killmenow
#!/bin/bash
while [[ true ]]
do
    sleep 2
done

root@d391259bf577:/# ./killmenow
```

**Terminal #1 - executing my manifest**

```
root@d391259bf577:/# puppet apply 2-execute_a_command.pp
Notice: Compiled catalog for d391259bf577.hsd1.ca.comcast.net in environment production in 0.01 seconds
Notice: /Stage[main]/Main/Exec[killmenow]/returns: executed successfully
Notice: Finished catalog run in 0.10 seconds
root@d391259bf577:/# 
```

**Terminal #0 - process has been terminated**

```
root@d391259bf577:/# ./killmenow
Terminated
root@d391259bf577:/#
```

  * [2-execute_a_command.pp](./2-execute_a_command.pp): Puppet script for killing a process

## Additional Project Resources
* [Intro to Configuration Management](https://www.digitalocean.com/community/tutorials/an-introduction-to-configuration-management)
* [Puppet resource type: file](https://www.puppet.com/docs/puppet/5.5/types/file.html)
* [Puppet’s Declarative Language: Modeling Instead of Scripting](https://www.puppet.com/blog)
* [Puppet lint](http://puppet-lint.com/)
* [Puppet emacs mode](https://github.com/voxpupuli/puppet-mode)
