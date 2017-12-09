<?php
/**
 * @file
 * fki_settings.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function fki_settings_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'nyheder_og_annoncer';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Nyheder og annoncer';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Sidefod: Global: Tekstområde */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a class="btn btn-info" href="/taxonomy/term/5188">Se alle nyheder</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>Der er ingen aktive høringer.</p>
<a class="btn btn-info" href="/taxonomy/term/5222">Se tidligere høringer</a>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2web_base_news' => 'os2web_base_news',
  );
  /* Filterkriterie: Indhold: Nyhedstype (field_os2web_news_page_type) */
  $handler->display->display_options['filters']['field_os2web_news_page_type_tid']['id'] = 'field_os2web_news_page_type_tid';
  $handler->display->display_options['filters']['field_os2web_news_page_type_tid']['table'] = 'field_data_field_os2web_news_page_type';
  $handler->display->display_options['filters']['field_os2web_news_page_type_tid']['field'] = 'field_os2web_news_page_type_tid';
  $handler->display->display_options['filters']['field_os2web_news_page_type_tid']['value'] = array(
    5188 => '5188',
  );
  $handler->display->display_options['filters']['field_os2web_news_page_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_os2web_news_page_type_tid']['vocabulary'] = 'os2web_news_page_newstypes';

  /* Display: Nyheder */
  $handler = $view->new_display('block', 'Nyheder', 'block_1');
  $handler->display->display_options['defaults']['empty'] = FALSE;

  /* Display: Udbud */
  $handler = $view->new_display('block', 'Udbud', 'block_2');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Sidefod: Global: Tekstområde */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<p><a class="btn btn-info" role="button" href="/taxonomy/term/5224">Se alle udbud</a></p>
';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>Der er ingen aktive udbud.</p>
<a class="btn btn-info" href="/taxonomy/term/5224">Se tidligere udbud</a>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2web_base_news' => 'os2web_base_news',
  );
  /* Filterkriterie: Indhold: Nyhedstype (field_os2web_news_page_type) */
  $handler->display->display_options['filters']['field_os2web_news_page_type_tid']['id'] = 'field_os2web_news_page_type_tid';
  $handler->display->display_options['filters']['field_os2web_news_page_type_tid']['table'] = 'field_data_field_os2web_news_page_type';
  $handler->display->display_options['filters']['field_os2web_news_page_type_tid']['field'] = 'field_os2web_news_page_type_tid';
  $handler->display->display_options['filters']['field_os2web_news_page_type_tid']['value'] = array(
    5224 => '5224',
  );
  $handler->display->display_options['filters']['field_os2web_news_page_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_os2web_news_page_type_tid']['vocabulary'] = 'os2web_news_page_newstypes';
  /* Filterkriterie: Indhold: Slut tidspunkt (field_os2web_news_date_end) */
  $handler->display->display_options['filters']['field_os2web_news_date_end_value']['id'] = 'field_os2web_news_date_end_value';
  $handler->display->display_options['filters']['field_os2web_news_date_end_value']['table'] = 'field_data_field_os2web_news_date_end';
  $handler->display->display_options['filters']['field_os2web_news_date_end_value']['field'] = 'field_os2web_news_date_end_value';
  $handler->display->display_options['filters']['field_os2web_news_date_end_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_os2web_news_date_end_value']['default_date'] = 'tomorrow -1 day';

  /* Display: Høringer */
  $handler = $view->new_display('block', 'Høringer', 'block_3');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Sidefod: Global: Tekstområde */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a class="btn btn-info" href="/taxonomy/term/5222">Se alle høringer og afgørelser</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2web_base_news' => 'os2web_base_news',
  );
  /* Filterkriterie: Indhold: Nyhedstype (field_os2web_news_page_type) */
  $handler->display->display_options['filters']['field_os2web_news_page_type_tid']['id'] = 'field_os2web_news_page_type_tid';
  $handler->display->display_options['filters']['field_os2web_news_page_type_tid']['table'] = 'field_data_field_os2web_news_page_type';
  $handler->display->display_options['filters']['field_os2web_news_page_type_tid']['field'] = 'field_os2web_news_page_type_tid';
  $handler->display->display_options['filters']['field_os2web_news_page_type_tid']['value'] = array(
    5222 => '5222',
  );
  $handler->display->display_options['filters']['field_os2web_news_page_type_tid']['expose']['operator_id'] = 'field_os2web_news_page_type_tid_op';
  $handler->display->display_options['filters']['field_os2web_news_page_type_tid']['expose']['label'] = 'Nyhedstype';
  $handler->display->display_options['filters']['field_os2web_news_page_type_tid']['expose']['operator'] = 'field_os2web_news_page_type_tid_op';
  $handler->display->display_options['filters']['field_os2web_news_page_type_tid']['expose']['identifier'] = 'field_os2web_news_page_type_tid';
  $handler->display->display_options['filters']['field_os2web_news_page_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    7 => 0,
    3 => 0,
    5 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_os2web_news_page_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_os2web_news_page_type_tid']['vocabulary'] = 'os2web_news_page_newstypes';

  /* Display: Tabs */
  $handler = $view->new_display('block', 'Tabs', 'block_4');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Nyhedstype (field_os2web_news_page_type) */
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['id'] = 'field_os2web_news_page_type_tid';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['table'] = 'field_data_field_os2web_news_page_type';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['field'] = 'field_os2web_news_page_type_tid';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['default_argument_options']['argument'] = '5188';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_os2web_news_page_type_tid']['validate_options']['vocabularies'] = array(
    'os2web_news_page_newstypes' => 'os2web_news_page_newstypes',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2web_base_news' => 'os2web_base_news',
  );
  $translatables['nyheder_og_annoncer'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('<a class="btn btn-info" href="/taxonomy/term/5188">Se alle nyheder</a>'),
    t('<p>Der er ingen aktive høringer.</p>
<a class="btn btn-info" href="/taxonomy/term/5222">Se tidligere høringer</a>'),
    t('Nyheder'),
    t('Udbud'),
    t('<p><a class="btn btn-info" role="button" href="/taxonomy/term/5224">Se alle udbud</a></p>
'),
    t('<p>Der er ingen aktive udbud.</p>
<a class="btn btn-info" href="/taxonomy/term/5224">Se tidligere udbud</a>'),
    t('Høringer'),
    t('<a class="btn btn-info" href="/taxonomy/term/5222">Se alle høringer og afgørelser</a>'),
    t('Nyhedstype'),
    t('Tabs'),
    t('Alle'),
  );
  $export['nyheder_og_annoncer'] = $view;

  $view = new view();
  $view->name = 'term_spots';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Term spots';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'row';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Felt: Spotboxe */
  $handler->display->display_options['fields']['field_os2web_base_field_spotbox']['id'] = 'field_os2web_base_field_spotbox';
  $handler->display->display_options['fields']['field_os2web_base_field_spotbox']['table'] = 'field_data_field_os2web_base_field_spotbox';
  $handler->display->display_options['fields']['field_os2web_base_field_spotbox']['field'] = 'field_os2web_base_field_spotbox';
  $handler->display->display_options['fields']['field_os2web_base_field_spotbox']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_base_field_spotbox']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_os2web_base_field_spotbox']['element_class'] = 'col-xs-12 col-sm-6 col-md-4';
  $handler->display->display_options['fields']['field_os2web_base_field_spotbox']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_base_field_spotbox']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_base_field_spotbox']['type'] = 'node_reference_node';
  $handler->display->display_options['fields']['field_os2web_base_field_spotbox']['settings'] = array(
    'node_reference_view_mode' => 'teaser',
  );
  $handler->display->display_options['fields']['field_os2web_base_field_spotbox']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_base_field_spotbox']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_os2web_base_field_spotbox']['separator'] = '';
  /* Kontekstuelt filter: Ord i ordforråd: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Filterkriterie: Ordforråd: Internt navn */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'os2web_base_tax_site_structure' => 'os2web_base_tax_site_structure',
  );

  /* Display: Spotbox */
  $handler = $view->new_display('panel_pane', 'Spotbox', 'panel_pane_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Felt: Spotboxe */
  $handler->display->display_options['fields']['field_os2web_base_field_spotbox']['id'] = 'field_os2web_base_field_spotbox';
  $handler->display->display_options['fields']['field_os2web_base_field_spotbox']['table'] = 'field_data_field_os2web_base_field_spotbox';
  $handler->display->display_options['fields']['field_os2web_base_field_spotbox']['field'] = 'field_os2web_base_field_spotbox';
  $handler->display->display_options['fields']['field_os2web_base_field_spotbox']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_base_field_spotbox']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_os2web_base_field_spotbox']['element_class'] = 'col-xs-12 col-sm-6 col-md-4';
  $handler->display->display_options['fields']['field_os2web_base_field_spotbox']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_base_field_spotbox']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_base_field_spotbox']['type'] = 'node_reference_node';
  $handler->display->display_options['fields']['field_os2web_base_field_spotbox']['settings'] = array(
    'node_reference_view_mode' => 'spotbox',
  );
  $handler->display->display_options['fields']['field_os2web_base_field_spotbox']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_base_field_spotbox']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_os2web_base_field_spotbox']['separator'] = '';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Ord i ordforråd: Term ID',
    ),
  );

  /* Display: Teaser */
  $handler = $view->new_display('panel_pane', 'Teaser', 'panel_pane_2');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Ord i ordforråd: Term ID',
    ),
  );

  /* Display: Spotbox - Stacked */
  $handler = $view->new_display('panel_pane', 'Spotbox - Stacked', 'panel_pane_3');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Felt: Spotboxe */
  $handler->display->display_options['fields']['field_os2web_base_field_spotbox']['id'] = 'field_os2web_base_field_spotbox';
  $handler->display->display_options['fields']['field_os2web_base_field_spotbox']['table'] = 'field_data_field_os2web_base_field_spotbox';
  $handler->display->display_options['fields']['field_os2web_base_field_spotbox']['field'] = 'field_os2web_base_field_spotbox';
  $handler->display->display_options['fields']['field_os2web_base_field_spotbox']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_base_field_spotbox']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_os2web_base_field_spotbox']['element_class'] = 'col-xs-12';
  $handler->display->display_options['fields']['field_os2web_base_field_spotbox']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_base_field_spotbox']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_base_field_spotbox']['type'] = 'node_reference_node';
  $handler->display->display_options['fields']['field_os2web_base_field_spotbox']['settings'] = array(
    'node_reference_view_mode' => 'spotbox',
  );
  $handler->display->display_options['fields']['field_os2web_base_field_spotbox']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_base_field_spotbox']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_os2web_base_field_spotbox']['separator'] = '';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_term.tid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Ord i ordforråd: Term ID',
    ),
  );
  $translatables['term_spots'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Alle'),
    t('Spotbox'),
    t('View panes'),
    t('Teaser'),
    t('Spotbox - Stacked'),
  );
  $export['term_spots'] = $view;

  return $export;
}
