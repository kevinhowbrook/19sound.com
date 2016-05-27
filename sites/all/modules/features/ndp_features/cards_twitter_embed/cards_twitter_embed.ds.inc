<?php
/**
 * @file
 * cards_twitter_embed.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function cards_twitter_embed_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'card|twitter_embed|teaser';
  $ds_fieldsetting->entity_type = 'card';
  $ds_fieldsetting->bundle = 'twitter_embed';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['card|twitter_embed|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function cards_twitter_embed_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'card|twitter_embed|teaser';
  $ds_layout->entity_type = 'card';
  $ds_layout->bundle = 'twitter_embed';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_twitter_embed',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_twitter_embed' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['card|twitter_embed|teaser'] = $ds_layout;

  return $export;
}
