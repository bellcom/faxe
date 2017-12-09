<?php
/**
 * @file
 * fki_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fki_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "linkit" && $api == "linkit_profiles") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function fki_settings_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
