<?php
/**
 * @file
 * blog_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function blog_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function blog_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function blog_feature_node_info() {
  $items = array(
    'blog' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('Use for multi-user blogs. Every user gets a personal blog.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
