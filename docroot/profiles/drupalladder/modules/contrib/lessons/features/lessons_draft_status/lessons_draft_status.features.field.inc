<?php
/**
 * @file
 * lessons_draft_status.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function lessons_draft_status_field_default_fields() {
  $fields = array();

  // Exported field: 'node-lesson-field_lesson_draft_status'
  $fields['node-lesson-field_lesson_draft_status'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_lesson_draft_status',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'draft' => 'Draft',
          'rtbt' => 'Ready to be tested',
          'tested' => 'Tested',
          'final' => 'Final Draft',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'lesson',
      'default_value' => array(
        0 => array(
          'value' => 'draft',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 7,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_lesson_draft_status',
      'label' => 'Draft Status',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '7',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Draft Status');

  return $fields;
}
