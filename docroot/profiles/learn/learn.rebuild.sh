#!/bin/bash
echo "Rebuilding Learn..."
rm -Rf modules/contrib themes/ libraries
drush -y make --no-core --contrib-destination=. learn.make
