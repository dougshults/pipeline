<?php
/**
 * @file
 * pipeline.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function pipeline_taxonomy_default_vocabularies() {
  return array(
    'condition' => array(
      'name' => 'Condition',
      'machine_name' => 'condition',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -10,
    ),
    'development_phase' => array(
      'name' => 'Development Phase',
      'machine_name' => 'development_phase',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -9,
    ),
    'therapeutic_area' => array(
      'name' => 'Therapeutic Area',
      'machine_name' => 'therapeutic_area',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -8,
    ),
  );
}
