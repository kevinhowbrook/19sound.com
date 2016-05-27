<?php
/**
 * @file
 * cards_twitter_pull.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cards_twitter_pull_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_eck_bundle_info().
 */
function cards_twitter_pull_eck_bundle_info() {
  $items = array(
    'card_twitter_pull' => array(
      'machine_name' => 'card_twitter_pull',
      'entity_type' => 'card',
      'name' => 'twitter_pull',
      'label' => 'Twitter Pull',
    ),
  );
  return $items;
}
