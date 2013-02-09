#!/bin/bash

# Quick utility script for developers working on the Drupal Ladder
# This script will re-download all contrib projects used by the ladder, based
# on the contents of drupal-org.make. However, it actually uses developer.
# make, which is slightly different: it tells make to ignore the Drupal Ladder
# sub-projects (ladder and lessons), so that they can be cloned from the git
# repository (as you can see in the last couple lines of this script). This
# makes it easier for developers to fiddle with them, create patches on those
# projects, etc.

echo "Rebuilding Drupal Ladder..."
rm -Rf modules/contrib themes/ libraries
drush -y make --no-core --contrib-destination=. developer.make

echo "Cloning the sub-projects"
git clone --recursive --branch 7.x-1.x http://git.drupal.org/project/ladder.git modules/contrib/ladder
git clone --recursive --branch 7.x-1.x http://git.drupal.org/project/lessons.git modules/contrib/lessons
