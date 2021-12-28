systemctl status<br>
systemctl start .service<br>
systemctl enable .service<br>
systemctl disable .service<br>
systemctl stop .service<br>
systemctl restart .service<br>

systemctl is-enabled .service<br>
systemctl list-unit-files |grep enabled<br>

User vs Root space with SystemD commands:<br>
https://unix.stackexchange.com/questions/385964/launching-chromium-on-startup-with-systemd/519585<br>

How to write SystemD services(Sort of)<br>
http://tuxgraphics.org/npa/systemd-scripts/<br>

Nuts and Bolts explanation:<br>
https://www.digitalocean.com/community/tutorials/systemd-essentials-working-with-services-units-and-the-journal<br>

Unit File Documentation:<br>
https://www.freedesktop.org/software/systemd/man/systemd.unit.html<br>
