<?php
/**
 * @file
 * dpl_service.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dpl_service_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function dpl_service_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function dpl_service_node_info() {
  $items = array(
    'service' => array(
      'name' => t('Service'),
      'base' => 'node_content',
      'description' => t('An in-depth description of the services offered by the libraries.'),
      'has_title' => '1',
      'title_label' => t('Service Name'),
      'help' => '',
    ),
  );
  return $items;
}
