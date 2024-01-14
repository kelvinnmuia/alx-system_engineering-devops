# 0x09. Web infrastructure design
## The Domains/Concepts covered in this project: `DevOps` `SysAdmin` `web infrastructure`

The project introduced me to `web infrastructure design`. I Learned about critical components that make up the 
web infrastructure, such as `DNS`, `Monitoring`, `Web Servers`, `Database Servers`, `Load Balancers`, 
`Application Servers`, `Firewalls`, `Operating Systems`. I managed to design web infrastructure that is highly 
available by adopting a redudant architecture, eliminating any single point of failure (SPOF).

## Tasks :page_with_curl:

**0. Simple web stack**

A lot of websites are powered by simple web infrastructure, a lot of time it is composed of a single server with 
a LAMP stack.

On a whiteboard, design a one server web infrastructure that hosts the website that is reachable via `www.foobar.com`. 
Start your explanation by having a user wanting to access your website.

Requirements:

You must use:
* 1 server
* 1 web server (Nginx)
* 1 application server
* 1 application files (your code base)
* 1 database (MySQL)
* 1 domain name `foobar.com` configured with a `www` record that points to your server IP `8.8.8.8`

You must be able to explain some specifics about this infrastructure:
* What is a server
* What is the role of the domain name
* What type of DNS record www is in www.foobar.com
* What is the role of the web server
* What is the role of the application server
* What is the role of the database
* What is the server using to communicate with the computer of the user requesting the website

You must be able to explain what the issues are with this infrastructure:
* SPOF
* Downtime when maintenance needed (like deploying new code web server needs to be restarted)
* Cannot scale if too much incoming traffic

Please, remember that everything must be written in English to further your technical ability in a variety of settings.

  * [0-simple_web_stack](https://docs.google.com/document/d/1fIF4RHR0PSiyH0SHjOybOhUZ0GSKP_pL5dBo_7MkdOY/edit?usp=sharing)

**1. Distributed web infrastructure**

On a whiteboard, design a three server web infrastructure that hosts the website `www.foobar.com`.

Requirements:

You must add:
* 2 servers
* 1 web server (Nginx)
* 1 application server
* 1 load-balancer (HAproxy)
* 1 set of application files (your code base)
* 1 database (MySQL)

You must be able to explain some specifics about this infrastructure:
* For every additional element, why you are adding it
* What distribution algorithm your load balancer is configured with and how it works
* Is your load-balancer enabling an Active-Active or Active-Passive setup, explain the difference between both
* How a database Primary-Replica (Master-Slave) cluster works
* What is the difference between the Primary node and the Replica node in regard to the application

You must be able to explain what the issues are with this infrastructure:
* Where are SPOF
* Security issues (no firewall, no HTTPS)
* No monitoring

Please, remember that everything must be written in English to further your technical ability in a variety of settings.

  * [1-distributed_web_infrastructure](https://docs.google.com/document/d/1dBjQb5KDFxAOWEz7aqRpcXIE5dcBeopVEcO4mEKe5NQ/edit?usp=sharing)

**2. Secured and monitored web infrastructure**

On a whiteboard, design a three server web infrastructure that hosts the website www.foobar.com, it must be secured, serve 
encrypted traffic, and be monitored.

Requirements:

You must add:

* 3 firewalls
* 1 SSL certificate to serve www.foobar.com over HTTPS
* 3 monitoring clients (data collector for Sumologic or other monitoring services)

You must be able to explain some specifics about this infrastructure:
* For every additional element, why you are adding it
* What are firewalls for
* Why is the traffic served over HTTPS
* What monitoring is used for
* How the monitoring tool is collecting data
* Explain what to do if you want to monitor your web server QPS

You must be able to explain what the issues are with this infrastructure:
* Why terminating SSL at the load balancer level is an issue
* Why having only one MySQL server capable of accepting writes is an issue
* Why having servers with all the same components (database, web server and application server) might be a problem

Please, remember that everything must be written in English to further your technical ability in a variety of settings.

  * [2-secured_and_monitored_web_infrastructure](https://docs.google.com/document/d/11l3_mRDrRS9ZCfH-MYCx3Hv7d9jN8d9SzhwlSDbxro8/edit?usp=sharing)

**3. Scale up**

[Application server vs web server](https://www.nginx.com/resources/glossary/application-server-vs-web-server/)

Requirements:

You must add:
* 1 server
* 1 load-balancer (HAproxy) configured as cluster with the other one
* Split components (web server, application server, database) with their own server

You must be able to explain some specifics about this infrastructure:
* For every additional element, why you are adding it

Please, remember that everything must be written in English to further your technical ability in a variety of settings.

  * [3-scale_up](https://docs.google.com/document/d/1j4nz977SQKDJmDz1OZd-Qo6BRSKnuJBcJ8GH0GBfxHo/edit?usp=sharing)

## Additional Project Resources
* [DNS](https://docs.google.com/document/d/1P_4z7ucvmXaAmRrkDpvjRPBINh_lsrP0CMhC2uqO1ak/edit?usp=sharing)
    * [how dns works](https://howdns.works/)
    * [DNS A Record](https://support.dnsimple.com/articles/a-record/)
    * [CNAME record](https://en.wikipedia.org/wiki/CNAME_record)
    * [MX record](https://en.wikipedia.org/wiki/MX_record)
    * [TXT record](https://en.wikipedia.org/wiki/TXT_record)
    * [Use DNS to scale with round-robin DNS](https://www.dnsknowledge.com/whatis/round-robin-dns/)
    * [What’s an NS Record?](https://support.dnsimple.com/articles/ns-record/)
    * [SOA Record](https://support.dnsimple.com/articles/soa-record/)
    * [What’s the point in having www in a url?](https://serverfault.com/questions/145777/what-s-the-point-in-having-www-in-a-url)
* [Monitoring](https://docs.google.com/document/d/10jDKwfEBnNwXPL1SGicwAqF4TlorOO6H16BxheHc0pI/edit?usp=sharing)
* [Web Server Definition](https://docs.google.com/document/d/1nMRMz_VFwPMt7c9Oz9xfGUQUkVMN7hMV8oIt6l4QJy0/edit?usp=sharing)
    * [Web_mechanics](https://developer.mozilla.org/en-US/docs/Learn/Common_questions/Web_mechanics/What_is_a_web_server)
    * [How Web Server Works](https://en.wikipedia.org/wiki/Web_server)
* [Network basics](https://docs.google.com/document/d/1Ffp2ERy_E7j3NpMB1n9tCVQ-6D-54CijQcfXGrzfLnA/edit?usp=sharing)
    * [What is a protocol](https://www.techtarget.com/searchnetworking/definition/protocol)
    * [What is an IP address](https://computer.howstuffworks.com/internet/basics/what-is-an-ip-address.htm)
    * [What is TCP/IP](https://www.avast.com/c-what-is-tcp-ip#)
    * [What is an Internet Protocol (IP) port?](https://www.lifewire.com/port-numbers-on-computer-networks-817939)
* [Load balancer](https://docs.google.com/document/d/1W0lUL7-pP2Ti7PrLZYssOYPhZIwAtbFNKLJx4NylXH8/edit?usp=sharing)
    * [Load-balancing](https://www.thegeekstuff.com/2016/01/load-balancer-intro/)
    * [Load-balancing algorithms](https://community.f5.com/t5/technical-articles/intro-to-load-balancing-for-developers-the-algorithms/ta-p/273759)
* [Server](https://docs.google.com/document/d/1PhAEvGQw2pFFpsDkXdlP4eHt6t8WBxlA1kME3aCUoBQ/edit?usp=sharing)
    * [What is a server](https://www.youtube.com/watch?v=B1ANfsDyjeA)
    * [Where are servers hosted (data centers)](https://www.youtube.com/watch?t=33&v=iuqXFC_qIvA&feature=youtu.be)
* [What is a database](https://www.oracle.com/ke/database/what-is-database/)
* [What’s the difference between a web server and an app server?](https://www.infoworld.com/article/2077354/app-server-web-server-what-s-the-difference.html)
* [DNS record types](https://www.site24x7.com/learn/dns-record-types.html)
* [Single point of failure](https://avinetworks.com/glossary/single-point-of-failure/)
* [How to avoid downtime when deploying new code](https://softwareengineering.stackexchange.com/questions/35063/how-do-you-update-your-production-codebase-database-schema-without-causing-downt#answers-header)
* [High availability cluster (active-active/active-passive)](https://docs.oracle.com/cd/E17904_01/core.1111/e10106/intro.htm#ASHIA712)
* [What is HTTPS](https://www.instantssl.com/http-vs-https)
* [What is a firewall](https://www.webopedia.com/definitions/firewall/)
