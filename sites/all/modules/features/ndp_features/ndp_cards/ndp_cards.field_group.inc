<?php
/**
 * @file
 * ndp_cards.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ndp_cards_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_options|card|basic_content|form';
  $field_group->group_name = 'group_options';
  $field_group->entity_type = 'card';
  $field_group->bundle = 'basic_content';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Card options',
    'weight' => '1',
    'children' => array(
      0 => 'field_card_bkcolour',
      1 => 'field_card_bkimage',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-options field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_options|card|basic_content|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_options|card|title_card|form';
  $field_group->group_name = 'group_options';
  $field_group->entity_type = 'card';
  $field_group->bundle = 'title_card';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Card options',
    'weight' => '1',
    'children' => array(
      0 => 'field_card_bkcolour',
      1 => 'field_card_bkimage',
      2 => 'field_card_height',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-options field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_options|card|title_card|form'] = $field_group;

  return $export;
}
