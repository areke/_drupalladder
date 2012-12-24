Drupal Ladder
=============

About
-----
Learn is a Drupal-based content management solution for websites to offer
lessons in an achievment-ladder format. It is the Drupal distribution that
powers drupalladder.org, including lessons and exercises to help learn and
contribute to Drupal.


System Requirements
-------------------
Learn is currently based on Drupal 7. See http://drupal.org/requirements for
Drupal requirements.


Customize and extend Learn
--------------------------


Basic Installation
-------------------
Drupal Ladder is available as full Drupal distribution in tgz and zip format at:
http://drupal.org/project/drupalladder.


Building with Drush Make
------------------------
Learn can be built using the Drush Make utility, to download and install Drupal
core and Learn's component parts. Drush 5.x+ includes Drush Make. Download it
from http://drupal.org/project/drush and see http://drush.ws/help/5#make for
help.

1. Clone the Learn distribution via git from
http://drupal.org/project/drupalladder/git-instructions

2. From the command-line, run: "drush make --prepare-install build-drupalladder.make
INSTALL_PATH" where INSTALL_PATH is an empty directory where your site will
reside.

3. Install Drupal, specifying "Drupal Ladder" as the install profile. See:
https://skitch.com/bryan.hirsch/8gpmb/select-an-installation-profile-drupal


For Developers
==============
Interested in helping with the Drupal Ladder distribution? Fantastic! We've included some bash scripts to make it easier for you to get up and running.

In the `scripts` directory, you'll find two handy scripts.

The one to start with is `build-dev-site.sh`. This script will setup the full
code needed for a Drupal site running this Drupal Ladder install profile, using
a clone of the Drupal Ladder git repository. This way, you'll be running off the
latest dev version, and you can easily make and apply patches. There are
comments in that script explaining how it should be used.

Once you've got your site up and running, you can run `rebuild.sh` to
re-download the contrib modules that are defined in `drupal-org.make`. This is
handy if you are tweaking the make file and need to test the site with updated
or different modules.
