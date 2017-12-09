<?php
/**
 * @file
 * fki_settings.linkit_profiles.inc
 */

/**
 * Implements hook_default_linkit_profiles().
 */
function fki_settings_default_linkit_profiles() {
  $export = array();

  $linkit_profile = new LinkitProfile();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'internt_link';
  $linkit_profile->admin_title = 'Internt link';
  $linkit_profile->admin_description = '';
  $linkit_profile->profile_type = '2';
  $linkit_profile->data = array(
    'search_plugins' => array(
      'entity:taxonomy_term' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:search_api_page' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:node' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'entity:fieldable_panels_pane' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:search_api_server' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:file' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:search_api_index' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:user' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'entity:fieldable_panels_pane' => array(
      'result_description' => '',
    ),
    'entity:node' => array(
      'result_description' => '',
      'bundles' => array(
        'os2web_borger_dk_article' => 'os2web_borger_dk_article',
        'os2web_base_contentpage' => 'os2web_base_contentpage',
        'os2web_base_news' => 'os2web_base_news',
        'webform' => 'webform',
        'os2web_base_iframe' => 'os2web_base_iframe',
        'os2web_ofir_job' => 0,
        'os2web_contact_contact' => 0,
        'os2web_meetings_bullet' => 0,
        'os2web_meetings_bullet_attach' => 0,
        'os2web_meetings_meeting' => 0,
        'postliste_import' => 0,
        'os2web_acadre_postlists' => 0,
        'os2web_base_selfservice_link' => 0,
        'os2web_spotbox_box' => 0,
      ),
      'group_by_bundle' => 1,
      'include_unpublished' => 0,
    ),
    'entity:search_api_server' => array(
      'result_description' => '',
      'include_unpublished' => 0,
    ),
    'entity:search_api_index' => array(
      'result_description' => '',
      'include_unpublished' => 0,
    ),
    'entity:search_api_page' => array(
      'result_description' => '',
      'include_unpublished' => 0,
    ),
    'entity:file' => array(
      'result_description' => '',
      'bundles' => array(
        'image' => 0,
        'video' => 0,
        'audio' => 0,
        'document' => 0,
      ),
      'group_by_bundle' => 0,
      'show_scheme' => 0,
      'group_by_scheme' => 0,
      'direct_download' => 0,
      'image_extra_info' => array(
        'thumbnail' => 'thumbnail',
        'dimensions' => 'dimensions',
      ),
      'url_type' => 'entity',
    ),
    'entity:taxonomy_term' => array(
      'result_description' => '',
      'bundles' => array(
        'os2web_taxonomies_tax_comittee' => 0,
        'os2web_taxonomies_tax_editor_tag' => 0,
        'os2web_taxonomies_tax_kle' => 0,
        'os2web_taxonomies_tax_org' => 0,
        'os2web_taxonomies_tax_places' => 0,
        'os2web_taxonomies_tax_politics' => 0,
        'os2web_taxonomies_tax_portal_cat' => 0,
        'os2web_taxonomies_tax_user_pos' => 0,
        'tags' => 0,
        'os2web_base_tax_promoteto' => 0,
        'os2web_base_tax_site_structure' => 0,
        'os2web_news_page_newstypes' => 0,
        'os2web_job_categories' => 0,
        'os2web_job_designs' => 0,
        'postlister' => 0,
        'os2web_meetings_tax_committee' => 0,
        'os2web_meetings_tax_location' => 0,
        'os2web_meetings_tax_status' => 0,
        'media_folders' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:user' => array(
      'result_description' => '',
    ),
    'insert_plugin' => array(
      'plugin' => 'raw_url',
      'url_method' => '3',
    ),
    'attribute_plugins' => array(
      'id' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'title' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'accesskey' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'rel' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'class' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'target' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'autocomplete' => array(
      'charLimit' => '3',
      'wait' => '350',
      'remoteTimeout' => '10000',
    ),
  );
  $export['internt_link'] = $linkit_profile;

  $linkit_profile = new LinkitProfile();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'linkit';
  $linkit_profile->admin_title = 'Linkit';
  $linkit_profile->admin_description = '';
  $linkit_profile->profile_type = '1';
  $linkit_profile->data = array(
    'text_formats' => array(
      'filtered_html' => 'filtered_html',
      'full_html' => 'full_html',
      'plain_text' => 0,
      'blokindhold' => 0,
      'email' => 0,
    ),
    'search_plugins' => array(
      'entity:taxonomy_term' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'entity:search_api_page' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:node' => array(
        'enabled' => 1,
        'weight' => '-10',
      ),
      'entity:fieldable_panels_pane' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:search_api_server' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:file' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:search_api_index' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'entity:user' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'entity:fieldable_panels_pane' => array(
      'result_description' => '',
    ),
    'entity:node' => array(
      'result_description' => '',
      'bundles' => array(
        'os2web_borger_dk_article' => 'os2web_borger_dk_article',
        'os2web_ofir_job' => 'os2web_ofir_job',
        'os2web_base_contentpage' => 'os2web_base_contentpage',
        'os2web_base_news' => 'os2web_base_news',
        'webform' => 'webform',
        'os2web_base_iframe' => 'os2web_base_iframe',
        'os2web_contact_contact' => 0,
        'os2web_meetings_bullet' => 0,
        'os2web_meetings_bullet_attach' => 0,
        'os2web_meetings_meeting' => 0,
        'postliste_import' => 0,
        'os2web_acadre_postlists' => 0,
        'os2web_base_selfservice_link' => 0,
        'os2web_spotbox_box' => 0,
      ),
      'group_by_bundle' => 1,
      'include_unpublished' => 0,
    ),
    'entity:search_api_server' => array(
      'result_description' => '',
      'include_unpublished' => 0,
    ),
    'entity:search_api_index' => array(
      'result_description' => '',
      'include_unpublished' => 0,
    ),
    'entity:search_api_page' => array(
      'result_description' => '',
      'include_unpublished' => 0,
    ),
    'entity:file' => array(
      'result_description' => '',
      'bundles' => array(
        'image' => 0,
        'video' => 0,
        'audio' => 0,
        'document' => 0,
      ),
      'group_by_bundle' => 0,
      'show_scheme' => 0,
      'group_by_scheme' => 0,
      'direct_download' => 0,
      'image_extra_info' => array(
        'thumbnail' => 'thumbnail',
        'dimensions' => 'dimensions',
      ),
      'url_type' => 'entity',
    ),
    'entity:taxonomy_term' => array(
      'result_description' => '',
      'bundles' => array(
        'os2web_base_tax_site_structure' => 'os2web_base_tax_site_structure',
        'os2web_news_page_newstypes' => 'os2web_news_page_newstypes',
        'os2web_taxonomies_tax_comittee' => 0,
        'os2web_taxonomies_tax_editor_tag' => 0,
        'os2web_taxonomies_tax_kle' => 0,
        'os2web_taxonomies_tax_org' => 0,
        'os2web_taxonomies_tax_places' => 0,
        'os2web_taxonomies_tax_politics' => 0,
        'os2web_taxonomies_tax_portal_cat' => 0,
        'os2web_taxonomies_tax_user_pos' => 0,
        'tags' => 0,
        'os2web_base_tax_promoteto' => 0,
        'os2web_job_categories' => 0,
        'os2web_job_designs' => 0,
        'postlister' => 0,
        'os2web_meetings_tax_committee' => 0,
        'os2web_meetings_tax_location' => 0,
        'os2web_meetings_tax_status' => 0,
        'media_folders' => 0,
      ),
      'group_by_bundle' => 0,
    ),
    'entity:user' => array(
      'result_description' => '',
    ),
    'insert_plugin' => array(
      'url_method' => '2',
    ),
    'attribute_plugins' => array(
      'id' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'title' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'accesskey' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'rel' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'class' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
      'target' => array(
        'enabled' => 0,
        'weight' => '-10',
      ),
    ),
    'autocomplete' => array(
      'charLimit' => '3',
      'wait' => '350',
      'remoteTimeout' => '10000',
    ),
  );
  $export['linkit'] = $linkit_profile;

  return $export;
}
