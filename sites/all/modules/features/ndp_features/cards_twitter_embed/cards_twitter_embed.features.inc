<?php
/**
 * @file
 * cards_twitter_embed.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cards_twitter_embed_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_eck_bundle_info().
 */
function cards_twitter_embed_eck_bundle_info() {
  $items = array(
    'card_twitter_embed' => array(
      'machine_name' => 'card_twitter_embed',
      'entity_type' => 'card',
      'name' => 'twitter_embed',
      'label' => 'Twitter Embed',
    ),
  );
  return $items;
}
