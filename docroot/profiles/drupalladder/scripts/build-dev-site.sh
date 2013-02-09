#!/bin/bash

# This is a bash script to quickly build a site to work on the Drupal Ladder
# install profile. It downloads the Drupal core and clones the Drupal Ladder
# install profile repo into the profiles directory (that's right, the repo
# containing this very script).

# It also does a little prep work: the required contrib modules listed in
# drupal-org.make are downloaded, and default.settings.php is copied to
# settings.php so that the site is ready for you to go through the regular
# Drupal installer.

# To use this script, you just need to run it in the directory where you would
# like to create the webroot. For Mac users, that might be ~/Sites, and for the
# sake of examples let's assume you're doing it there. Copy this script into
# ~/Sites and run it there:
#   ./build-dev-site.sh
# You will then have the Drupal root at ~/Sites/ladder.dev. If you haven't
# already done so, configure your local Apache instance to use this directory
# however you choose. I use MAMP Pro, so I added a new host (ladder.dev) for the
# directory (~/Sites/ladder.dev). Then, navigate to the new site
# (http://ladder.dev in my case), choose Drupal Ladder, and go through the
# regular Drupal installation process.



# Download Drupal core
drush dl drupal --drupal-project-rename=ladder.dev -y

# Clone the install profile git repo
git clone --recursive --branch 7.x-1.x http://git.drupal.org/project/drupalladder.git ladder.dev/profiles/drupalladder

# Download contrib resources for profile, by running the rebuild script
echo "Changing directories to the downloaded directory..."
cd ladder.dev/profiles/drupalladder
./scripts/rebuild.sh

# Copy default.settings.php to prep for install
echo "Creating a copy of the default settings file..."
cd ../../sites/default
cp default.settings.php settings.php

echo "Your Drupal Ladder should now be completely installed and ready for use."
