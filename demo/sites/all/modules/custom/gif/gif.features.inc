<?php
/**
 * @file
 * gif.features.inc
 */

/**
 * Implements hook_views_api().
 */
function gif_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function gif_node_info() {
  $items = array(
    'gif' => array(
      'name' => t('gif'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
