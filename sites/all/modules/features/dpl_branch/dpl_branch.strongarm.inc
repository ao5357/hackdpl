<?php
/**
 * @file
 * dpl_branch.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function dpl_branch_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_branch';
  $strongarm->value = array();
  $export['menu_options_branch'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_branch';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_branch'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_branch';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_branch'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_branch';
  $strongarm->value = '0';
  $export['node_preview_branch'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_branch';
  $strongarm->value = 0;
  $export['node_submitted_branch'] = $strongarm;

  return $export;
}