# 0x18. Webstack monitoring
## The Domains/Concepts covered in this project: `DevOps` `SysAdmin` `monitoring`

In this project I learned how to create puppet scripts to automate the processes of web stack debugging. At the end of the project 
I created a puppet script to fix the 500 error on the web server.

![alt text](./monitoring.png)

**Background Context**

“You cannot fix or improve what you cannot measure” is a famous saying in the Tech industry. In the age of the data-ism, monitoring 
how our Software systems are doing is an important thing. In this project, we will implement one of many tools to measure what is 
going on our servers.

Web stack monitoring can be broken down into 2 categories:

  * Application monitoring: getting data about your running software and making sure it is behaving as expected
  * Server monitoring: getting data about your virtual or physical server and making sure they are not overloaded 
(could be CPU, memory, disk or network overload)

## Tasks :page_with_curl:

**0. Sign up for Datadog and install datadog-agent**

For this task head to [https://www.datadoghq.com/](https://www.datadoghq.com/) and sign up for a free `Datadog` account. When signing up, 
you’ll have the option of selecting statistics from your current stack that `Datadog` can monitor for you. Once you have an account set up, 
follow the instructions given on the website to install the `Datadog` agent.

![alt text](./datadog-agent.png)

  * Sign up for Datadog - `Please make sure you are using the US website of Datagog (https://app.datadoghq.com)`
  * Use the `US1` region
  * Install `datadog-agent` on `web-01`
  * Create an application key
  * Copy-paste in your Intranet user profile (here) your DataDog `API key` and your DataDog `application key`.
  * Your server `web-01` should be visible in Datadog under the host name `XX-web-01`
    * You can validate it by using this API
    * If needed, you will need to update the hostname of your server

  * [Datadog-account-signup](./): created a free Datadog account.

**1. Monitor some metrics**

Among the litany of data your monitoring service can report to you are system metrics. You can use these metrics to determine statistics 
such as reads/writes per second, which can help your company determine if/how they should scale. Set up some monitors within the Datadog 
dashboard to monitor and alert you of a few. You can read about the various system metrics that you can monitor here: 
[System Check](https://docs.datadoghq.com/integrations/system/).

![alt text](./metric.png)

**2. Create a dashboard**

Now create a dashboard with different metrics displayed in order to get a few different visualizations.

  * Create a new `dashboard`
  * Add at least 4 `widgets` to your dashboard. They can be of any type and monitor whatever you’d like
  * Create the answer file `2-setup_datadog` which has the `dashboard_id` on the first line. **Note**: in order to get the id of your 
dashboard, you may need to use [Datadog’s API](https://docs.datadoghq.com/api/latest/).

  * [2-setup_datadog](./): created data dog setup answer file.

## Additional Project Resources

  * [What is server monitoring](https://www.sumologic.com/glossary/server-monitoring/)
  * [What is application monitoring](https://en.wikipedia.org/wiki/Application_performance_management)
  * [System monitoring by Google](https://sre.google/sre-book/monitoring-distributed-systems/)
  * [Nginx logging and monitoring](https://docs.nginx.com/nginx/admin-guide/monitoring/logging/)
