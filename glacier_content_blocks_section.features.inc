<?php
/**
 * @file
 * glacier_content_blocks_section.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function glacier_content_blocks_section_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_paragraphs_info().
 */
function glacier_content_blocks_section_paragraphs_info() {
  $items = array(
    'section' => array(
      'name' => 'Section',
      'bundle' => 'section',
      'locked' => '1',
    ),
  );
  return $items;
}
