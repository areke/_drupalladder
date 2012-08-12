<?php
/**
 * Return $conf object.
 * 
 * @param $argv
 *  Array. PHP args passed.
 *  - $argv[0] = (default) file
 *  - $arg[1] = version (e.g. 1.0-alpha8)
 *
 * Usage:
 *  - Provide general configuration information for Acquia Cloud scripts
 *  - Place this file in a /scripts directory (/scripts expects to be a sybling of /docroor)
 *  - Include in PHP scripts: require_once('scripts.settings.php');
 *
 *  distro-specific settings here:
 *  - $conf->version 
 *  - $conf->drupal_version 
 *  - $conf->my_profile 
 *  - $conf->profile_name 
 *
 *  Git project info.
 *  - $conf->repo 
 *  - $conf->branch 
 *
 *  Computed based on valued entered above (don't do anything manual here):
 *  - $conf->path 
 *  - $conf->docroot 
 *  - $conf->profile 
 *  - $conf->build_make 
 */
function _scripts_conf($argv) {
  $conf = new stdClass();

  // Enter distro-specific settings here:
  $conf->version = $argv[1];
  $conf->drupal_version = '7.x';
  $conf->my_profile = 'drupalladder';
  $conf->profile_name = 'Drupal Ladder';

  // Git project info.
  $conf->repo = 'bhirsch@git.drupal.org:project/drupalladder.git';
  $conf->branch = '7.x-1.x';

  // Computed based on valued entered above (don't do anything manual here):
  $conf->path = dirname(dirname(__FILE__));
  $conf->docroot = $conf->path . '/docroot';
  $conf->profile = $conf->path . '/docroot/profiles/' . $conf->my_profile;
  $conf->build_make = sprintf('%s/make/%s-%s/build-%s.make', $conf->path, $conf->drupal_version, $conf->version, $conf->my_profile);

  return $conf;
}
