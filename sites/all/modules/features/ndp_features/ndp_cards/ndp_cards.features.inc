<?php
/**
 * @file
 * ndp_cards.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ndp_cards_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_eck_bundle_info().
 */
function ndp_cards_eck_bundle_info() {
  $items = array(
    'card_background_image' => array(
      'machine_name' => 'card_background_image',
      'entity_type' => 'card',
      'name' => 'background_image',
      'label' => 'Background Image',
    ),
    'card_basic_content' => array(
      'machine_name' => 'card_basic_content',
      'entity_type' => 'card',
      'name' => 'basic_content',
      'label' => 'Basic Content',
    ),
    'card_title_card' => array(
      'machine_name' => 'card_title_card',
      'entity_type' => 'card',
      'name' => 'title_card',
      'label' => 'Title Card',
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function ndp_cards_eck_entity_type_info() {
  $items = array(
    'card' => array(
      'name' => 'card',
      'label' => 'Card',
      'properties' => array(
        'title' => array(
          'label' => 'Title',
          'type' => 'text',
          'behavior' => 'title',
        ),
        'uid' => array(
          'label' => 'Author',
          'type' => 'integer',
          'behavior' => 'author',
        ),
        'created' => array(
          'label' => 'Created',
          'type' => 'integer',
          'behavior' => 'created',
        ),
        'changed' => array(
          'label' => 'Changed',
          'type' => 'integer',
          'behavior' => 'changed',
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implements hook_image_default_styles().
 */
function ndp_cards_image_default_styles() {
  $styles = array();

  // Exported image style: background_large.
  $styles['background_large'] = array(
    'label' => 'Background Large',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 2000,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: background_medium.
  $styles['background_medium'] = array(
    'label' => 'Background Medium',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 800,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: background_small.
  $styles['background_small'] = array(
    'label' => 'Background Small',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function ndp_cards_node_info() {
  $items = array(
    'landing_page' => array(
      'name' => t('Landing Page'),
      'base' => 'node_content',
      'description' => t('A long form story page, often used as the home page, a landing page or a hub page. Content is laid out using reusable \'cards\' - each card can be created from a specific type and shuffled on the page to achieve the layout you need.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
