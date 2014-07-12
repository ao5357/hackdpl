<?php
/**
 * @file
 * dpl_event.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dpl_event_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function dpl_event_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function dpl_event_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('Events, both one-time and recurring'),
      'has_title' => '1',
      'title_label' => t('Event Name'),
      'help' => '',
    ),
  );
  return $items;
}
