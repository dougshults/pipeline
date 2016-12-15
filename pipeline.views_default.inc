<?php
/**
 * @file
 * pipeline.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pipeline_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'pipeline';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Pipeline';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'development_phase' => 'development_phase',
    'condition' => 0,
    'therapeutic_area' => 0,
    'tags' => 0,
  );
  /* Field: Content: Therapeutic Area */
  $handler->display->display_options['fields']['field_therapeutic_area']['id'] = 'field_therapeutic_area';
  $handler->display->display_options['fields']['field_therapeutic_area']['table'] = 'field_data_field_therapeutic_area';
  $handler->display->display_options['fields']['field_therapeutic_area']['field'] = 'field_therapeutic_area';
  $handler->display->display_options['fields']['field_therapeutic_area']['label'] = '';
  $handler->display->display_options['fields']['field_therapeutic_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_therapeutic_area']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_therapeutic_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_therapeutic_area']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Condition */
  $handler->display->display_options['fields']['field_condition']['id'] = 'field_condition';
  $handler->display->display_options['fields']['field_condition']['table'] = 'field_data_field_condition';
  $handler->display->display_options['fields']['field_condition']['field'] = 'field_condition';
  $handler->display->display_options['fields']['field_condition']['label'] = '';
  $handler->display->display_options['fields']['field_condition']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_condition']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_condition']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_condition']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Development Year */
  $handler->display->display_options['fields']['field_development_year']['id'] = 'field_development_year';
  $handler->display->display_options['fields']['field_development_year']['table'] = 'field_data_field_development_year';
  $handler->display->display_options['fields']['field_development_year']['field'] = 'field_development_year';
  $handler->display->display_options['fields']['field_development_year']['label'] = '';
  $handler->display->display_options['fields']['field_development_year']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_development_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_development_year']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Development Phase */
  $handler->display->display_options['fields']['field_development_phase']['id'] = 'field_development_phase';
  $handler->display->display_options['fields']['field_development_phase']['table'] = 'field_data_field_development_phase';
  $handler->display->display_options['fields']['field_development_phase']['field'] = 'field_development_phase';
  $handler->display->display_options['fields']['field_development_phase']['label'] = '';
  $handler->display->display_options['fields']['field_development_phase']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_development_phase']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_development_phase']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_development_phase']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="pipeline-filter">
[field_therapeutic_area] 
[title] 
[field_therapeutic_approach]<br>
<b>Target: [field_condition] </b> <br>
[field_development_year] <br> 
<p>[field_taxonomy_icon] </p>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'development_candidate' => 'development_candidate',
  );

  /* Display: Pipeline */
  $handler = $view->new_display('panel_pane', 'Pipeline', 'pipeline');
  $handler->display->display_options['display_description'] = 'Display Development Candidates';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Global: Contextual Links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['fields']['contextual_links']['check_access'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Therapeutic Area */
  $handler->display->display_options['fields']['field_therapeutic_area']['id'] = 'field_therapeutic_area';
  $handler->display->display_options['fields']['field_therapeutic_area']['table'] = 'field_data_field_therapeutic_area';
  $handler->display->display_options['fields']['field_therapeutic_area']['field'] = 'field_therapeutic_area';
  $handler->display->display_options['fields']['field_therapeutic_area']['label'] = '';
  $handler->display->display_options['fields']['field_therapeutic_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_therapeutic_area']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_therapeutic_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_therapeutic_area']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Therapeutic Approach */
  $handler->display->display_options['fields']['field_therapeutic_approach']['id'] = 'field_therapeutic_approach';
  $handler->display->display_options['fields']['field_therapeutic_approach']['table'] = 'field_data_field_therapeutic_approach';
  $handler->display->display_options['fields']['field_therapeutic_approach']['field'] = 'field_therapeutic_approach';
  $handler->display->display_options['fields']['field_therapeutic_approach']['label'] = '';
  $handler->display->display_options['fields']['field_therapeutic_approach']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_therapeutic_approach']['element_label_colon'] = FALSE;
  /* Field: Content: Condition */
  $handler->display->display_options['fields']['field_condition']['id'] = 'field_condition';
  $handler->display->display_options['fields']['field_condition']['table'] = 'field_data_field_condition';
  $handler->display->display_options['fields']['field_condition']['field'] = 'field_condition';
  $handler->display->display_options['fields']['field_condition']['label'] = '';
  $handler->display->display_options['fields']['field_condition']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_condition']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_condition']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_condition']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Development Year */
  $handler->display->display_options['fields']['field_development_year']['id'] = 'field_development_year';
  $handler->display->display_options['fields']['field_development_year']['table'] = 'field_data_field_development_year';
  $handler->display->display_options['fields']['field_development_year']['field'] = 'field_development_year';
  $handler->display->display_options['fields']['field_development_year']['label'] = '';
  $handler->display->display_options['fields']['field_development_year']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_development_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_development_year']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Development Phase */
  $handler->display->display_options['fields']['field_development_phase']['id'] = 'field_development_phase';
  $handler->display->display_options['fields']['field_development_phase']['table'] = 'field_data_field_development_phase';
  $handler->display->display_options['fields']['field_development_phase']['field'] = 'field_development_phase';
  $handler->display->display_options['fields']['field_development_phase']['label'] = '';
  $handler->display->display_options['fields']['field_development_phase']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_development_phase']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_development_phase']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_development_phase']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: Sponsor Icon */
  $handler->display->display_options['fields']['field_taxonomy_icon']['id'] = 'field_taxonomy_icon';
  $handler->display->display_options['fields']['field_taxonomy_icon']['table'] = 'field_data_field_taxonomy_icon';
  $handler->display->display_options['fields']['field_taxonomy_icon']['field'] = 'field_taxonomy_icon';
  $handler->display->display_options['fields']['field_taxonomy_icon']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_taxonomy_icon']['label'] = '';
  $handler->display->display_options['fields']['field_taxonomy_icon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_taxonomy_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_taxonomy_icon']['empty'] = '[field_development_phase]';
  $handler->display->display_options['fields']['field_taxonomy_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_taxonomy_icon']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="development-candidate">
<p> [field_therapeutic_area] </p>
<h2>[title] </h2>
[field_therapeutic_approach]<br>
<b>Target: [field_condition] </b> <br>
[field_development_year] <br> 
<p>[field_taxonomy_icon] </p>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Development Year (field_development_year) */
  $handler->display->display_options['sorts']['field_development_year_value']['id'] = 'field_development_year_value';
  $handler->display->display_options['sorts']['field_development_year_value']['table'] = 'field_data_field_development_year';
  $handler->display->display_options['sorts']['field_development_year_value']['field'] = 'field_development_year_value';
  $handler->display->display_options['sorts']['field_development_year_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'development_candidate' => 'development_candidate',
  );
  $export['pipeline'] = $view;

  $view = new view();
  $view->name = 'pipeline_context';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Pipeline Context';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'development_candidate' => 'development_candidate',
  );
  $export['pipeline_context'] = $view;

  $view = new view();
  $view->name = 'pipeline_filter';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Pipeline Filter';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'pipeline-filter';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'pipeline-filter';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Taxonomy term: Representative node */
  $handler->display->display_options['relationships']['tid_representative']['id'] = 'tid_representative';
  $handler->display->display_options['relationships']['tid_representative']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['tid_representative']['field'] = 'tid_representative';
  $handler->display->display_options['relationships']['tid_representative']['required'] = TRUE;
  $handler->display->display_options['relationships']['tid_representative']['subquery_sort'] = 'node.status';
  $handler->display->display_options['relationships']['tid_representative']['subquery_view'] = 'pipeline_context';
  $handler->display->display_options['relationships']['tid_representative']['subquery_namespace'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;

  /* Display: Condition Filter */
  $handler = $view->new_display('panel_pane', 'Condition Filter', 'condition_filter');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['text'] = '<div class="this-list">
[name]
</div>';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Field: Taxonomy vocabulary: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['text'] = '[name]
[name_1]';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['element_default_classes'] = FALSE;
  $export['pipeline_filter'] = $view;

  return $export;
}
