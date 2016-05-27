<?php
/**
 * @file
 * cards_twitter_embed.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function cards_twitter_embed_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'card-twitter_embed-field_twitter_embed'.
  $field_instances['card-twitter_embed-field_twitter_embed'] = array(
    'bundle' => 'twitter_embed',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Paste the embed code for a tweet, or the code for an embedded widget here.<br>
For more information about embedding tweets see <a href="https://dev.twitter.com/web/embedded-tweets">this guide</a>. Create a new embed widget <a href="https://twitter.com/settings/widgets/new">here</a>. You will need to be logged in to Twitter to create a new widget.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
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
        'label' => 'hidden',
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
        'weight' => 1,
      ),
    ),
    'entity_type' => 'card',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_twitter_embed',
    'label' => 'Twitter Embed',
    'required' => 1,
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
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 32,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Paste the embed code for a tweet, or the code for an embedded widget here.<br>
For more information about embedding tweets see <a href="https://dev.twitter.com/web/embedded-tweets">this guide</a>. Create a new embed widget <a href="https://twitter.com/settings/widgets/new">here</a>. You will need to be logged in to Twitter to create a new widget.');
  t('Twitter Embed');

  return $field_instances;
}
