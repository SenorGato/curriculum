**System D Overview:<br>**

**Commands:<br>**
systemctl status - Prints running systemD services, and releated status information<br>
systemctl start .service - Starts a service<br>
systemctl stop .service - Stops a service<br>
systemctl enable .service - Sets a service to start at boot<br>
systemctl disable .service - Stops a service from starting at boot<br>
systemctl restart .service - Restarts a service<br>

systemctl is-enabled .service - Tests if a service is enabled<br>
systemctl list-unit-files |grep enabled  Lists all unit files that are enabled<br>

**User vs Root space with SystemD commands:<br>**
https://unix.stackexchange.com/questions/385964/launching-chromium-on-startup-with-systemd/519585<br>

**How to write SystemD services(Sort of)<br>**
http://tuxgraphics.org/npa/systemd-scripts/<br>

**Nuts and Bolts explanation:<br>**
https://www.digitalocean.com/community/tutorials/systemd-essentials-working-with-services-units-and-the-journal<br>

**Unit File Documentation:<br>**
https://www.freedesktop.org/software/systemd/man/systemd.unit.html<br>
**Tutorial**
https://www.howtogeek.com/687970/how-to-run-a-linux-program-at-startup-with-systemd/
