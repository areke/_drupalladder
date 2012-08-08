<?php
/**
 * @file
 * lessons_draft_status.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lessons_draft_status_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
