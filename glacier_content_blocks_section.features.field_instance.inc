<?php
/**
 * @file
 * glacier_content_blocks_section.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function glacier_content_blocks_section_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'paragraphs_item-section-field_content_blocks'
  $field_instances['paragraphs_item-section-field_content_blocks'] = array(
    'bundle' => 'section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'fences_display_specific_wrapper' => '',
          'field_formatter_class' => '',
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'fences_display_specific_wrapper' => '',
          'field_formatter_class' => '',
          'view_mode' => 'paragraphs_editor_preview',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_content_blocks',
    'label' => 'Content blocks',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'content' => -1,
        'grid' => -1,
        'section' => -1,
        'title' => -1,
      ),
      'bundle_weights' => array(
        'content' => 2,
        'grid' => 3,
        'section' => 4,
        'title' => 5,
      ),
      'default_edit_mode' => 'preview',
      'entity_translation_sync' => FALSE,
      'title' => 'Content block',
      'title_multiple' => 'Content blocks',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-section-field_pg_styles'
  $field_instances['paragraphs_item-section-field_pg_styles'] = array(
    'bundle' => 'section',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'paragraphs_item',
    'fences_wrapper' => 'div',
    'field_name' => 'field_pg_styles',
    'label' => 'Styles',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'select2_integration' => array(
        'allow_add_onfly' => 0,
        'show_voc_terms_page_link' => 0,
        'styling' => array(
          'dropdownAutoWidth' => 0,
          'placeholder' => '',
        ),
        'use_select2' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'use_select2' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Content blocks');
  t('Styles');

  return $field_instances;
}
