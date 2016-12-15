<?php
/**
 * @file
 * pipeline.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function pipeline_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-development_candidate-field_condition'.
  $field_instances['node-development_candidate-field_condition'] = array(
    'bundle' => 'development_candidate',
    'clean_markup' => 1,
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select a condition or disease to associate with the Development Candidate. You can view or edit the taxonomy terms for <a href="/admin/structure/taxonomy/condition">Conditions</a>. ',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_condition',
    'label' => 'Condition',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'node-development_candidate-field_development_phase'.
  $field_instances['node-development_candidate-field_development_phase'] = array(
    'bundle' => 'development_candidate',
    'clean_markup' => 1,
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Start typing to find optional development phases. If sponsored, the sponsoring company\'s logo should be added to the <a href="/admin/structure/taxonomy/development_phase">Development Phase</a> taxonomy.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_development_phase',
    'label' => 'Development Phase',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'node-development_candidate-field_development_year'.
  $field_instances['node-development_candidate-field_development_year'] = array(
    'bundle' => 'development_candidate',
    'clean_markup' => 1,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'medium',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_development_year',
    'label' => 'Development Year',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'm/d/Y - g:i:sa',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'node-development_candidate-field_therapeutic_approach'.
  $field_instances['node-development_candidate-field_therapeutic_approach'] = array(
    'bundle' => 'development_candidate',
    'clean_markup' => 1,
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Include the therapeutic approach, mechanism or modality (e.g., exon skipping, receptor antagonist, vaccine)',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_therapeutic_approach',
    'label' => 'Therapeutic Approach',
    'required' => 1,
    'settings' => array(
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
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'node-development_candidate-field_therapeutic_area'.
  $field_instances['node-development_candidate-field_therapeutic_area'] = array(
    'bundle' => 'development_candidate',
    'clean_markup' => 1,
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select a Therapeutic Area for the Development Candidate. You can view or edit the taxonomy terms for <a href="/admin/structure/taxonomy/therapeutic_area">Therapeutic Areas</a>. ',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_therapeutic_area',
    'label' => 'Therapeutic Area',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-development_phase-field_taxonomy_icon'.
  $field_instances['taxonomy_term-development_phase-field_taxonomy_icon'] = array(
    'bundle' => 'development_phase',
    'deleted' => 0,
    'description' => 'Upload an icon for the sponsor ',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_taxonomy_icon',
    'label' => 'Sponsor Icon',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'sites/default/files/sponsor-logos',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'imce' => 0,
            'reference' => 0,
            'remote' => 0,
            'upload' => 'upload',
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
            'search_all_fields' => 0,
          ),
        ),
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-therapeutic_area-field_taxonomy_icon'.
  $field_instances['taxonomy_term-therapeutic_area-field_taxonomy_icon'] = array(
    'bundle' => 'therapeutic_area',
    'deleted' => 0,
    'description' => 'Add an icon to the Therapeutic Area',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_taxonomy_icon',
    'label' => 'Taxonomy Icon',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'files/taxonomy-icons',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '150 KB',
      'max_resolution' => '120x120',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'imce' => 'imce',
            'reference' => 0,
            'remote' => 0,
            'upload' => 'upload',
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
            'search_all_fields' => 0,
          ),
        ),
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add an icon to the Therapeutic Area');
  t('Condition');
  t('Development Phase');
  t('Development Year');
  t('Include the therapeutic approach, mechanism or modality (e.g., exon skipping, receptor antagonist, vaccine)');
  t('Select a Therapeutic Area for the Development Candidate. You can view or edit the taxonomy terms for <a href="/admin/structure/taxonomy/therapeutic_area">Therapeutic Areas</a>. ');
  t('Select a condition or disease to associate with the Development Candidate. You can view or edit the taxonomy terms for <a href="/admin/structure/taxonomy/condition">Conditions</a>. ');
  t('Sponsor Icon');
  t('Start typing to find optional development phases. If sponsored, the sponsoring company\'s logo should be added to the <a href="/admin/structure/taxonomy/development_phase">Development Phase</a> taxonomy.');
  t('Taxonomy Icon');
  t('Therapeutic Approach');
  t('Therapeutic Area');
  t('Upload an icon for the sponsor ');

  return $field_instances;
}
