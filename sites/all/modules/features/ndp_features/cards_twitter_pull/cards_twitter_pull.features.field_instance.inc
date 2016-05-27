<?php
/**
 * @file
 * cards_twitter_pull.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function cards_twitter_pull_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'card-twitter_pull-field_tweet_items'.
  $field_instances['card-twitter_pull-field_tweet_items'] = array(
    'bundle' => 'twitter_pull',
    'default_value' => array(
      0 => array(
        'value' => 3,
      ),
    ),
    'deleted' => 0,
    'description' => 'How many items to render. Maximum of 20.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'card',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_tweet_items',
    'label' => 'Number of items',
    'required' => 0,
    'settings' => array(
      'max' => 20,
      'min' => 1,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'card-twitter_pull-field_tweet_key'.
  $field_instances['card-twitter_pull-field_tweet_key'] = array(
    'bundle' => 'twitter_pull',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<strong>@twittername</strong> or <strong>#hashtag</strong> to render into the timeline.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'card',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_tweet_key',
    'label' => 'Tweet key',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<strong>@twittername</strong> or <strong>#hashtag</strong> to render into the timeline.');
  t('How many items to render. Maximum of 20.');
  t('Number of items');
  t('Tweet key');

  return $field_instances;
}
