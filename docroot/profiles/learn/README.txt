Learn Warehouse (version 1.0)
-----------------------------

About

    TODO


Install

    TODO


System Requirements

    TODO


Customize and extend Learn

    TODO


TODO before Tuesday meetup
--------------------------
  - make build + instructions
  - tarball, zip file + instructions



Steps to build install profile from scratch
---------------------------------------------
download drupal 7 from http://drupal.org/project/drupal
cd path/to/drupal
ls
cd profiles
git clone --branch 7.x-1.x bhirsch@git.drupal.org:project/learn.git
cd learn
drush -y make --no-core --contrib-destination=. learn.make
sudo vim ~/hosts
sudo vim ~/httpd-vhosts.conf
restart MAMP
install drupal: Learn Drupal
  https://skitch.com/bryan.hirsch/8gpmb/select-an-installation-profile-drupal

