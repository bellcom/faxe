<?php
/**
 * @file
 * fki_settings.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function fki_settings_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'kommuneinfo';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Kommuneinfo';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'os2web_news_type_blocks',
      'display' => 'block_1',
      'args' => '5224',
      'title' => 'Udbud',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'os2web_news_type_blocks',
      'display' => 'block_1',
      'args' => '5222',
      'title' => 'Høringer',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'os2web_news_type_blocks',
      'display' => 'block_1',
      'args' => '5223',
      'title' => 'Afgørelser',
      'weight' => '-98',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Afgørelser');
  t('Høringer');
  t('Kommuneinfo');
  t('Udbud');

  $export['kommuneinfo'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'nyheder';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Nyheder';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_nyheder_og_annoncer-block_1',
      'hide_title' => 1,
      'title' => 'Nyheder',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_nyheder_og_annoncer-block_2',
      'hide_title' => 1,
      'title' => 'Udbud',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'views_delta_nyheder_og_annoncer-block_3',
      'hide_title' => 1,
      'title' => 'Høringer og afgørelser',
      'weight' => '-98',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Høringer og afgørelser');
  t('Nyheder');
  t('Udbud');

  $export['nyheder'] = $quicktabs;

  return $export;
}
