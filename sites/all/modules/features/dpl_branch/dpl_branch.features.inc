<?php
/**
 * @file
 * dpl_branch.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dpl_branch_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function dpl_branch_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function dpl_branch_node_info() {
  $items = array(
    'branch' => array(
      'name' => t('Branch'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Branch Name'),
      'help' => '',
    ),
  );
  return $items;
}
