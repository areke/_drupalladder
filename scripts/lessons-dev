#!/usr/bin/php
<?php

main();

function main() {
  $path = '../docroot/profiles/drupalladder/modules/contrib/lessons/';
  $commands = array(
    'git clone --recursive --branch 7.x-1.x bhirsch@git.drupal.org:project/lessons.git',
    "mv lessons/.git $path",
    'rm -rf lessons',
    sprintf("cd %s; %s;\n", $path, 'git reset --hard'),
  );
  foreach($commands as $command) {
    execute_command($command);
  }
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
