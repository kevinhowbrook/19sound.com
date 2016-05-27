<?php
/**
 * @file
 * cards_twitter_pull.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function cards_twitter_pull_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_card__twitter_pull';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'redirect' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_card__twitter_pull'] = $strongarm;

  return $export;
}
