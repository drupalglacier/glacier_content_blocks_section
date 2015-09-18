<?php
/**
 * @file
 * glacier_content_blocks_section.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function glacier_content_blocks_section_taxonomy_default_vocabularies() {
  return array(
    'content_block_styles' => array(
      'name' => 'Content block styles',
      'machine_name' => 'content_block_styles',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
