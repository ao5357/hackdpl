<?php
/**
 * @file
 * dpl_media.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function dpl_media_taxonomy_default_vocabularies() {
  return array(
    'media_type' => array(
      'name' => 'Media Type',
      'machine_name' => 'media_type',
      'description' => 'Different formats of book, audio, video, etc.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
