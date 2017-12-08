<?php
/**
 * @file
 * faxe.features.inc
 */

/**
 * Implements hook_views_api().
 */
function faxe_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function faxe_image_default_styles() {
  $styles = array();

  // Exported image style: fredericia_content_image.
  $styles['fredericia_content_image'] = array(
    'label' => 'fredericia_content_image',
    'effects' => array(
      5 => array(
        'name' => 'epsacrop_crop',
        'data' => array(
          'width' => 620,
          'height' => 294,
          'anchor' => 'center-center',
          'jcrop_settings' => array(
            'aspect_ratio' => '',
            'bgcolor' => 'white',
            'bgopacity' => 0.6,
            'fallback' => 1,
          ),
        ),
        'weight' => 1,
      ),
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 620,
          'height' => 294,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
