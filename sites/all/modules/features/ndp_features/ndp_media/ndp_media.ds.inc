<?php
/**
 * @file
 * ndp_media.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function ndp_media_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'float_left';
  $ds_view_mode->label = 'Float Left';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['float_left'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'float_right';
  $ds_view_mode->label = 'Float Right';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['float_right'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'full_width';
  $ds_view_mode->label = 'Full Width';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['full_width'] = $ds_view_mode;

  return $export;
}
