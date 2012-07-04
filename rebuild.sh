#!/bin/bash

# rebuild.sh - update contrib modules, themes, and libraries

makefile=`find . -name vg3.make`

if [[ -z $makefile || ! -f $makefile ]]
then
  echo 'No makefile found. Please make sure you are in a profile directory with a valid makefile.';
else
  find . -name .DS_Store -print0 | xargs -0 rm

  # nuke existing modules, themes, and libraries
  for directory in ./modules/contrib ./themes/contrib ./libraries
  do
    if [ -d $directory ]
    then
      rm -Rf $directory
    fi
  done

  # add "--download-mechanism='drush_make'" if curl is not available on your system
  echo 'Updating contrib modules and themes...'
  drush -y make --working-copy --no-core --contrib-destination=. vg3.make
fi

