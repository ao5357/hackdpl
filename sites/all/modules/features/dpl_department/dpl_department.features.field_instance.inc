<?php
/**
 * @file
 * dpl_department.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function dpl_department_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-department-field_telephone'
  $field_instances['taxonomy_term-department-field_telephone'] = array(
    'bundle' => 'department',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_telephone',
    'label' => 'Telephone',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'telephone',
      'settings' => array(
        'placeholder' => '',
      ),
      'type' => 'telephone_default',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Telephone');

  return $field_instances;
}
