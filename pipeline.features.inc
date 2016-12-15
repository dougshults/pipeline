<?php
/**
 * @file
 * pipeline.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pipeline_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pipeline_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function pipeline_node_info() {
  $items = array(
    'development_candidate' => array(
      'name' => t('Development Candidate'),
      'base' => 'node_content',
      'description' => t('A therapeutic target or development candidate '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
