<?php
/**
 * @file
 * cards_twitter_embed.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function cards_twitter_embed_filter_default_formats() {
  $formats = array();

  // Exported format: Tweet.
  $formats['tweet'] = array(
    'format' => 'tweet',
    'name' => 'Tweet',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(),
  );

  return $formats;
}
