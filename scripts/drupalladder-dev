#!/usr/bin/php
<?php

main();

function main() {
  $drupalladder_path = '../docroot/profiles/drupalladder/';
  $commands = array(
    'git clone --recursive --branch 7.x-1.x bhirsch@git.drupal.org:project/drupalladder.git',
    'mv drupalladder/.git ../docroot/profiles/drupalladder/',
    'rm -rf drupalladder',
    sprintf("cd %s; %s;\n", $drupalladder_path, 'git reset --hard'),
  );
  foreach($commands as $command) {
    execute_command($command);
  }

  // Rebuild project on 7.x-1.x-dev.
  echo "To rebuild install profile, do this:\n";
  echo "\t" . "cd $drupalladder_path\n";
  echo "\t" . 'rm -Rf modules/contrib themes/ libraries' . "\n";
  echo "\t" . 'drush -y make --no-core --contrib-destination=. drupal-org.make' . "\n";
}

/**
 * Execute command and print results.
 * 
 * @param $command
 *  String. Command to be run from the command line.
 */
function execute_command($command) {
  echo "\nRunning:\n\t$command\n";
  shell_exec($command);
  // $result = exec($command, $output);
  // printf("result: %s\n\n", print_r($result));
  // printf("output: %s\n\n", print_r($output));
}
