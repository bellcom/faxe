<?php
/**
 * @file
 * fki_settings.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function fki_settings_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__andet-indhold';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -8;
  $handler->conf = array(
    'title' => 'Spotbokse',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'andet-indhold',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'os2web_spotbox_box' => 'os2web_spotbox_box',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'content-with-right-sidebar-8-4';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top' => NULL,
      'sidebar' => NULL,
      'content' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ece4379e-4bc0-43a3-9e39-59944aeb9668';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__andet-indhold';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-68ef7980-6533-4daf-8335-d1faf585cb89';
  $pane->panel = 'content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_os2web_spotbox_big_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => '',
      'image_link' => '',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '68ef7980-6533-4daf-8335-d1faf585cb89';
  $display->content['new-68ef7980-6533-4daf-8335-d1faf585cb89'] = $pane;
  $display->panels['content'][0] = 'new-68ef7980-6533-4daf-8335-d1faf585cb89';
  $pane = new stdClass();
  $pane->pid = 'new-9b3c1e8f-6590-4653-a9d9-a797321f5859';
  $pane->panel = 'content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_os2web_base_field_direct';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '9b3c1e8f-6590-4653-a9d9-a797321f5859';
  $display->content['new-9b3c1e8f-6590-4653-a9d9-a797321f5859'] = $pane;
  $display->panels['content'][1] = 'new-9b3c1e8f-6590-4653-a9d9-a797321f5859';
  $pane = new stdClass();
  $pane->pid = 'new-9c96f7a7-24f7-48c9-a0e0-ef08e110b185';
  $pane->panel = 'content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_os2web_spotbox_text';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '9c96f7a7-24f7-48c9-a0e0-ef08e110b185';
  $display->content['new-9c96f7a7-24f7-48c9-a0e0-ef08e110b185'] = $pane;
  $display->panels['content'][2] = 'new-9c96f7a7-24f7-48c9-a0e0-ef08e110b185';
  $pane = new stdClass();
  $pane->pid = 'new-c1ce709e-9c3b-40e7-b66b-627462002d6e';
  $pane->panel = 'content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_os2web_spotbox_display';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'list_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'c1ce709e-9c3b-40e7-b66b-627462002d6e';
  $display->content['new-c1ce709e-9c3b-40e7-b66b-627462002d6e'] = $pane;
  $display->panels['content'][3] = 'new-c1ce709e-9c3b-40e7-b66b-627462002d6e';
  $pane = new stdClass();
  $pane->pid = 'new-e3bd744a-40ed-4b77-bba2-902e94cf3d9d';
  $pane->panel = 'content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_os2web_spotbox_url';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'e3bd744a-40ed-4b77-bba2-902e94cf3d9d';
  $display->content['new-e3bd744a-40ed-4b77-bba2-902e94cf3d9d'] = $pane;
  $display->panels['content'][4] = 'new-e3bd744a-40ed-4b77-bba2-902e94cf3d9d';
  $pane = new stdClass();
  $pane->pid = 'new-ff111ead-49d1-4b32-81c1-e728c5b00cd4';
  $pane->panel = 'sidebar';
  $pane->type = 'node_content';
  $pane->subtype = 'node_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'links' => 0,
    'no_extras' => 1,
    'override_title' => 1,
    'override_title_text' => 'Preview',
    'identifier' => '',
    'link' => 0,
    'leave_node_title' => 0,
    'build_mode' => 'teaser',
    'context' => 'argument_entity_id:node_1',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
    'template_suggestion' => 'plain',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ff111ead-49d1-4b32-81c1-e728c5b00cd4';
  $display->content['new-ff111ead-49d1-4b32-81c1-e728c5b00cd4'] = $pane;
  $display->panels['sidebar'][0] = 'new-ff111ead-49d1-4b32-81c1-e728c5b00cd4';
  $pane = new stdClass();
  $pane->pid = 'new-6c3a2690-1890-4b59-b9f6-60a2ff80c69d';
  $pane->panel = 'sidebar';
  $pane->type = 'node_content';
  $pane->subtype = 'node_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'links' => 0,
    'no_extras' => 1,
    'override_title' => 1,
    'override_title_text' => '',
    'identifier' => '',
    'link' => 1,
    'leave_node_title' => 1,
    'build_mode' => 'spotbox',
    'context' => 'argument_entity_id:node_1',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
    'template_suggestion' => 'plain',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '6c3a2690-1890-4b59-b9f6-60a2ff80c69d';
  $display->content['new-6c3a2690-1890-4b59-b9f6-60a2ff80c69d'] = $pane;
  $display->panels['sidebar'][1] = 'new-6c3a2690-1890-4b59-b9f6-60a2ff80c69d';
  $pane = new stdClass();
  $pane->pid = 'new-3e521f51-39c4-432f-99a8-d422ecec6f93';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'os2web_linked_content-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '3e521f51-39c4-432f-99a8-d422ecec6f93';
  $display->content['new-3e521f51-39c4-432f-99a8-d422ecec6f93'] = $pane;
  $display->panels['sidebar'][2] = 'new-3e521f51-39c4-432f-99a8-d422ecec6f93';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__andet-indhold'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__nyheder';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -3;
  $handler->conf = array(
    'title' => 'Nyheder',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'nyheder',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'os2web_base_news' => 'os2web_base_news',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'full-width-dark-light-dark-with-right-sidebar-8-4';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top' => NULL,
      'sidebar' => NULL,
      'content' => NULL,
      'bottom' => NULL,
      'dark_section_1' => NULL,
      'light_section_1' => NULL,
      'light_section_0' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ece4379e-4bc0-43a3-9e39-59944aeb9668';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__nyheder';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-96f1570a-84d0-49b2-87fd-9929aa954705';
  $pane->panel = 'content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_os2web_base_field_video';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'file_rendered',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'file_view_mode' => 'default',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
    'template_suggestion' => 'plain',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '96f1570a-84d0-49b2-87fd-9929aa954705';
  $display->content['new-96f1570a-84d0-49b2-87fd-9929aa954705'] = $pane;
  $display->panels['content'][0] = 'new-96f1570a-84d0-49b2-87fd-9929aa954705';
  $pane = new stdClass();
  $pane->pid = 'new-3e502072-bf7b-4e95-a09f-8999ec9ee694';
  $pane->panel = 'content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_os2web_base_field_lead_img';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'slideshow',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'slideshow_image_style' => 'fredericia_content_image',
      'slideshow_link' => '',
      'slideshow_caption' => '',
      'slideshow_caption_link' => '',
      'slideshow_fx' => 'fade',
      'slideshow_speed' => '1000',
      'slideshow_timeout' => '4000',
      'slideshow_order' => '',
      'slideshow_controls' => 0,
      'slideshow_controls_pause' => 0,
      'slideshow_controls_position' => 'after',
      'slideshow_pause' => 0,
      'slideshow_start_on_hover' => 0,
      'slideshow_pager' => '',
      'slideshow_pager_position' => 'after',
      'slideshow_pager_image_style' => '',
      'slideshow_carousel_image_style' => '',
      'slideshow_carousel_visible' => '3',
      'slideshow_carousel_scroll' => '1',
      'slideshow_carousel_speed' => '500',
      'slideshow_carousel_vertical' => 0,
      'slideshow_carousel_circular' => 0,
      'slideshow_carousel_follow' => 0,
      'slideshow_carousel_skin' => '',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'os2-full-width-image',
    'template_suggestion' => 'plain',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '3e502072-bf7b-4e95-a09f-8999ec9ee694';
  $display->content['new-3e502072-bf7b-4e95-a09f-8999ec9ee694'] = $pane;
  $display->panels['content'][1] = 'new-3e502072-bf7b-4e95-a09f-8999ec9ee694';
  $pane = new stdClass();
  $pane->pid = 'new-e4254450-0654-4504-be85-74a97ef88d3c';
  $pane->panel = 'content';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_os2web_base_field_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'slideshow',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'slideshow_image_style' => 'fredericia_content_image',
      'slideshow_link' => '',
      'slideshow_caption' => '',
      'slideshow_caption_link' => '',
      'slideshow_fx' => 'fade',
      'slideshow_speed' => '1000',
      'slideshow_timeout' => '4000',
      'slideshow_order' => '',
      'slideshow_controls' => 0,
      'slideshow_controls_pause' => 0,
      'slideshow_controls_position' => 'after',
      'slideshow_pause' => 0,
      'slideshow_start_on_hover' => 0,
      'slideshow_pager' => '',
      'slideshow_pager_position' => 'after',
      'slideshow_pager_image_style' => '',
      'slideshow_carousel_image_style' => 'fredericia_content_image',
      'slideshow_carousel_visible' => '3',
      'slideshow_carousel_scroll' => '1',
      'slideshow_carousel_speed' => '500',
      'slideshow_carousel_vertical' => 0,
      'slideshow_carousel_circular' => 0,
      'slideshow_carousel_follow' => 0,
      'slideshow_carousel_skin' => '',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'os2-full-width-image',
    'template_suggestion' => 'plain',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'e4254450-0654-4504-be85-74a97ef88d3c';
  $display->content['new-e4254450-0654-4504-be85-74a97ef88d3c'] = $pane;
  $display->panels['content'][2] = 'new-e4254450-0654-4504-be85-74a97ef88d3c';
  $pane = new stdClass();
  $pane->pid = 'new-cd6daa4f-2f2a-4cbe-88c6-c5746bf01857';
  $pane->panel = 'content';
  $pane->type = 'node_content';
  $pane->subtype = 'node_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'links' => 0,
    'no_extras' => 0,
    'override_title' => 1,
    'override_title_text' => '',
    'identifier' => '',
    'link' => 0,
    'leave_node_title' => 1,
    'build_mode' => 'full',
    'context' => 'argument_entity_id:node_1',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'cd6daa4f-2f2a-4cbe-88c6-c5746bf01857';
  $display->content['new-cd6daa4f-2f2a-4cbe-88c6-c5746bf01857'] = $pane;
  $display->panels['content'][3] = 'new-cd6daa4f-2f2a-4cbe-88c6-c5746bf01857';
  $pane = new stdClass();
  $pane->pid = 'new-f069cd0e-0734-4e54-ba24-d370e5213926';
  $pane->panel = 'light_section_1';
  $pane->type = 'views_panes';
  $pane->subtype = 'os2web_node_display-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
    'template_suggestion' => 'plain',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f069cd0e-0734-4e54-ba24-d370e5213926';
  $display->content['new-f069cd0e-0734-4e54-ba24-d370e5213926'] = $pane;
  $display->panels['light_section_1'][0] = 'new-f069cd0e-0734-4e54-ba24-d370e5213926';
  $pane = new stdClass();
  $pane->pid = 'new-fea81816-bdc2-4b62-a447-cbde22b8ed5e';
  $pane->panel = 'light_section_1';
  $pane->type = 'views_panes';
  $pane->subtype = 'os2web_editor_information-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
    'template_suggestion' => 'plain',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'fea81816-bdc2-4b62-a447-cbde22b8ed5e';
  $display->content['new-fea81816-bdc2-4b62-a447-cbde22b8ed5e'] = $pane;
  $display->panels['light_section_1'][1] = 'new-fea81816-bdc2-4b62-a447-cbde22b8ed5e';
  $pane = new stdClass();
  $pane->pid = 'new-81282eec-9ae4-46f7-9ed2-4ca9162090a0';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'os2web_related_links-node_related_links_block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Læs også',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'os2-links-list',
    'template_suggestion' => 'block',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '81282eec-9ae4-46f7-9ed2-4ca9162090a0';
  $display->content['new-81282eec-9ae4-46f7-9ed2-4ca9162090a0'] = $pane;
  $display->panels['sidebar'][0] = 'new-81282eec-9ae4-46f7-9ed2-4ca9162090a0';
  $pane = new stdClass();
  $pane->pid = 'new-eaa23731-382b-4918-99c9-b7c989059555';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_os2web_base_field_contact';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'node_reference_node',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'node_reference_view_mode' => 'full',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Kontaktinformation',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'eaa23731-382b-4918-99c9-b7c989059555';
  $display->content['new-eaa23731-382b-4918-99c9-b7c989059555'] = $pane;
  $display->panels['sidebar'][1] = 'new-eaa23731-382b-4918-99c9-b7c989059555';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-cd6daa4f-2f2a-4cbe-88c6-c5746bf01857';
  $handler->conf['display'] = $display;
  $export['node_view__nyheder'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_context_4508524e-b32f-455d-b587-5f6f4f2a9d8f';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Andre termsider',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'full-width-dark-light-dark-with-right-sidebar-8-4';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top' => NULL,
      'sidebar' => NULL,
      'content' => NULL,
      'bottom' => NULL,
      'dark_section_1' => NULL,
      'light_section_0' => NULL,
      'light_section_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->uuid = '776af5fc-90e0-41e9-a1d8-c1d310a902ba';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view__panel_context_4508524e-b32f-455d-b587-5f6f4f2a9d8f';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7b0ada68-478f-4ef2-b678-23cca11a0801';
  $pane->panel = 'content';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Termnavn som H!',
    'title' => '',
    'body' => '<h1>%term:name</h1>
',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
    'template_suggestion' => 'plain',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7b0ada68-478f-4ef2-b678-23cca11a0801';
  $display->content['new-7b0ada68-478f-4ef2-b678-23cca11a0801'] = $pane;
  $display->panels['content'][0] = 'new-7b0ada68-478f-4ef2-b678-23cca11a0801';
  $pane = new stdClass();
  $pane->pid = 'new-6ff0cc23-a57c-4bb2-9d8d-56a3e640a1d3';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'os2web_term_content-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_term_1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
    'template_suggestion' => 'plain',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '6ff0cc23-a57c-4bb2-9d8d-56a3e640a1d3';
  $display->content['new-6ff0cc23-a57c-4bb2-9d8d-56a3e640a1d3'] = $pane;
  $display->panels['content'][1] = 'new-6ff0cc23-a57c-4bb2-9d8d-56a3e640a1d3';
  $pane = new stdClass();
  $pane->pid = 'new-0c48095a-d726-490c-8a23-9e667847fc43';
  $pane->panel = 'sidebar';
  $pane->type = 'term_description';
  $pane->subtype = 'term_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_term_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0c48095a-d726-490c-8a23-9e667847fc43';
  $display->content['new-0c48095a-d726-490c-8a23-9e667847fc43'] = $pane;
  $display->panels['sidebar'][0] = 'new-0c48095a-d726-490c-8a23-9e667847fc43';
  $pane = new stdClass();
  $pane->pid = 'new-d685152a-9104-40ca-8dad-203717f30c95';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_field';
  $pane->subtype = 'taxonomy_term:field_os2web_base_field_contact';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'node_reference_node',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'node_reference_view_mode' => 'full',
    ),
    'context' => 'argument_term_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'd685152a-9104-40ca-8dad-203717f30c95';
  $display->content['new-d685152a-9104-40ca-8dad-203717f30c95'] = $pane;
  $display->panels['sidebar'][1] = 'new-d685152a-9104-40ca-8dad-203717f30c95';
  $pane = new stdClass();
  $pane->pid = 'new-2d37c464-260a-49ff-a77c-5751083d0849';
  $pane->panel = 'sidebar';
  $pane->type = 'entity_field';
  $pane->subtype = 'taxonomy_term:field_os2web_base_field_spotbox';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'node_reference_node',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'node_reference_view_mode' => 'spotbox',
    ),
    'context' => 'argument_term_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
    'template_suggestion' => 'plain',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '2d37c464-260a-49ff-a77c-5751083d0849';
  $display->content['new-2d37c464-260a-49ff-a77c-5751083d0849'] = $pane;
  $display->panels['sidebar'][2] = 'new-2d37c464-260a-49ff-a77c-5751083d0849';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6ff0cc23-a57c-4bb2-9d8d-56a3e640a1d3';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_4508524e-b32f-455d-b587-5f6f4f2a9d8f'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__sitestruktur-ikke-niveau-1';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -2;
  $handler->conf = array(
    'title' => 'Sitestruktur Ikke niveau 1',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'sitestruktur-ikke-niveau-1',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        1 => array(
          'name' => 'entity_bundle:taxonomy_term',
          'settings' => array(
            'type' => array(
              'os2web_base_tax_site_structure' => 'os2web_base_tax_site_structure',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'term_parent',
          'settings' => array(
            'vid' => '11',
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'full-width-light-dark-light';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Centreret',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'right' => NULL,
      'light_section_1' => NULL,
      'light_section_2' => NULL,
      'dark_section_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->uuid = '8d932897-19d8-4e34-9bcd-27dce6ee5da5';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'term_view__sitestruktur-ikke-niveau-1';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-90ced79a-9c0b-46a5-8028-62a54de8b3ad';
  $pane->panel = 'dark_section_1';
  $pane->type = 'views_panes';
  $pane->subtype = 'os2web_term_news-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'use_pager' => 0,
    'pager_id' => '0',
    'items_per_page' => '3',
    'offset' => '0',
    'exposed' => array(
      'field_os2web_base_field_promote_tid' => '5220',
    ),
    'context' => array(
      0 => 'argument_term_1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
    'template_suggestion' => 'plain',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '90ced79a-9c0b-46a5-8028-62a54de8b3ad';
  $display->content['new-90ced79a-9c0b-46a5-8028-62a54de8b3ad'] = $pane;
  $display->panels['dark_section_1'][0] = 'new-90ced79a-9c0b-46a5-8028-62a54de8b3ad';
  $pane = new stdClass();
  $pane->pid = 'new-4fefa7cc-9204-400a-a5cb-fc370424d3db';
  $pane->panel = 'light_section_1';
  $pane->type = 'views_panes';
  $pane->subtype = 'os2web_term_page-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4fefa7cc-9204-400a-a5cb-fc370424d3db';
  $display->content['new-4fefa7cc-9204-400a-a5cb-fc370424d3db'] = $pane;
  $display->panels['light_section_1'][0] = 'new-4fefa7cc-9204-400a-a5cb-fc370424d3db';
  $pane = new stdClass();
  $pane->pid = 'new-6264b920-c2d2-43b4-b259-dd80ecd3c3a5';
  $pane->panel = 'light_section_1';
  $pane->type = 'block';
  $pane->subtype = 'os2web_related_links-term_selfservice_links_block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Selvbetjening',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
    'template_suggestion' => 'self-service-toggle',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '6264b920-c2d2-43b4-b259-dd80ecd3c3a5';
  $display->content['new-6264b920-c2d2-43b4-b259-dd80ecd3c3a5'] = $pane;
  $display->panels['light_section_1'][1] = 'new-6264b920-c2d2-43b4-b259-dd80ecd3c3a5';
  $pane = new stdClass();
  $pane->pid = 'new-02fefd4a-1110-46a9-8628-153475ed93d8';
  $pane->panel = 'light_section_1';
  $pane->type = 'views_panes';
  $pane->subtype = 'os2web_term_subterms-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'os2-equal-height-wrapper',
    'template_suggestion' => 'plain',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '02fefd4a-1110-46a9-8628-153475ed93d8';
  $display->content['new-02fefd4a-1110-46a9-8628-153475ed93d8'] = $pane;
  $display->panels['light_section_1'][2] = 'new-02fefd4a-1110-46a9-8628-153475ed93d8';
  $pane = new stdClass();
  $pane->pid = 'new-01de63aa-6493-4271-b91b-759c0457969e';
  $pane->panel = 'light_section_1';
  $pane->type = 'views_panes';
  $pane->subtype = 'os2web_nodelist-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_os2web_base_field_struct_tid' => '%term:tid',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'os2-equal-height-wrapper',
    'template_suggestion' => 'plain',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '01de63aa-6493-4271-b91b-759c0457969e';
  $display->content['new-01de63aa-6493-4271-b91b-759c0457969e'] = $pane;
  $display->panels['light_section_1'][3] = 'new-01de63aa-6493-4271-b91b-759c0457969e';
  $pane = new stdClass();
  $pane->pid = 'new-c50b5071-88cd-48c2-a849-9b72c448d861';
  $pane->panel = 'light_section_2';
  $pane->type = 'views_panes';
  $pane->subtype = 'os2web_term_spots-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_term_1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
    'template_suggestion' => 'plain',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c50b5071-88cd-48c2-a849-9b72c448d861';
  $display->content['new-c50b5071-88cd-48c2-a849-9b72c448d861'] = $pane;
  $display->panels['light_section_2'][0] = 'new-c50b5071-88cd-48c2-a849-9b72c448d861';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__sitestruktur-ikke-niveau-1'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function fki_settings_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'nyheder';
  $page->task = 'page';
  $page->admin_title = 'Nyheder';
  $page->admin_description = '';
  $page->path = 'aktuelt';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_nyheder__panel';
  $handler->task = 'page';
  $handler->subtask = 'nyheder';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'full-width-dark-light-dark-with-right-sidebar-8-4';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'sidebar' => NULL,
      'content' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Nyheder og annoncer';
  $display->uuid = '569a7917-1a65-46ea-af06-e54d6af1e537';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_nyheder__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1d17024d-1b2c-422e-aaae-bdba11315049';
  $pane->panel = 'content';
  $pane->type = 'block';
  $pane->subtype = 'block-2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
    'template_suggestion' => 'sdfgsfgg',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1d17024d-1b2c-422e-aaae-bdba11315049';
  $display->content['new-1d17024d-1b2c-422e-aaae-bdba11315049'] = $pane;
  $display->panels['content'][0] = 'new-1d17024d-1b2c-422e-aaae-bdba11315049';
  $pane = new stdClass();
  $pane->pid = 'new-c79a7346-25c3-4198-b182-4feabf1da2e0';
  $pane->panel = 'content';
  $pane->type = 'block';
  $pane->subtype = 'quicktabs-nyheder';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
    'template_suggestion' => 'plain',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c79a7346-25c3-4198-b182-4feabf1da2e0';
  $display->content['new-c79a7346-25c3-4198-b182-4feabf1da2e0'] = $pane;
  $display->panels['content'][1] = 'new-c79a7346-25c3-4198-b182-4feabf1da2e0';
  $pane = new stdClass();
  $pane->pid = 'new-4ff97c5a-44a8-4433-808a-61a2f0444a52';
  $pane->panel = 'sidebar';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '2144',
    'links' => 0,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'teaser',
    'link_node_title' => 0,
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4ff97c5a-44a8-4433-808a-61a2f0444a52';
  $display->content['new-4ff97c5a-44a8-4433-808a-61a2f0444a52'] = $pane;
  $display->panels['sidebar'][0] = 'new-4ff97c5a-44a8-4433-808a-61a2f0444a52';
  $pane = new stdClass();
  $pane->pid = 'new-4ce5a41d-f65e-4109-9584-35897a8c1ba6';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'os2-menu-list',
    'template_suggestion' => 'menu_tree',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '4ce5a41d-f65e-4109-9584-35897a8c1ba6';
  $display->content['new-4ce5a41d-f65e-4109-9584-35897a8c1ba6'] = $pane;
  $display->panels['sidebar'][1] = 'new-4ce5a41d-f65e-4109-9584-35897a8c1ba6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c79a7346-25c3-4198-b182-4feabf1da2e0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['nyheder'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'term_nyheder';
  $page->task = 'page';
  $page->admin_title = 'Term Nyheder';
  $page->admin_description = '';
  $page->path = 'aktuelt/nyheder/%name';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'name' => array(
      'id' => 1,
      'identifier' => 'Taksonomiterm (flere): ID',
      'name' => 'terms',
      'settings' => array(
        'breadcrumb' => 1,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_term_nyheder__panel';
  $handler->task = 'page';
  $handler->subtask = 'term_nyheder';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'full-width-dark-light-dark-with-right-sidebar-8-4';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'content' => NULL,
      'sidebar' => NULL,
      'dark_section_1' => NULL,
      'light_section_0' => NULL,
      'light_section_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%name nyheder';
  $display->uuid = '06857f4a-8993-49e1-91fc-45b64652a6ab';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_term_nyheder__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-cc33712e-2113-4584-9eac-8f845da6c759';
  $pane->panel = 'content';
  $pane->type = 'views_panes';
  $pane->subtype = 'aktuelle_term_nyheder-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'term_node_tid_depth' => '%name:tids',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
    'template_suggestion' => 'plain',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'cc33712e-2113-4584-9eac-8f845da6c759';
  $display->content['new-cc33712e-2113-4584-9eac-8f845da6c759'] = $pane;
  $display->panels['content'][0] = 'new-cc33712e-2113-4584-9eac-8f845da6c759';
  $pane = new stdClass();
  $pane->pid = 'new-2d84ae7d-2d2b-4586-9a49-5a8a05318663';
  $pane->panel = 'light_section_0';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Overskrift',
    'title' => '',
    'title_heading' => 'h1',
    'body' => '<h1 class="h1">%name nyheder</h1>
',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
    'template_suggestion' => 'plain',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2d84ae7d-2d2b-4586-9a49-5a8a05318663';
  $display->content['new-2d84ae7d-2d2b-4586-9a49-5a8a05318663'] = $pane;
  $display->panels['light_section_0'][0] = 'new-2d84ae7d-2d2b-4586-9a49-5a8a05318663';
  $pane = new stdClass();
  $pane->pid = 'new-dc644faf-776f-49f7-8a4f-66082048a00b';
  $pane->panel = 'sidebar';
  $pane->type = 'block';
  $pane->subtype = 'block-2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'dc644faf-776f-49f7-8a4f-66082048a00b';
  $display->content['new-dc644faf-776f-49f7-8a4f-66082048a00b'] = $pane;
  $display->panels['sidebar'][0] = 'new-dc644faf-776f-49f7-8a4f-66082048a00b';
  $pane = new stdClass();
  $pane->pid = 'new-e6d55525-abd4-4124-967c-ca0fb31f3f10';
  $pane->panel = 'sidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'term_spots-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'items_per_page' => '10',
    'offset' => '0',
    'context' => array(
      0 => 'argument_terms_1',
    ),
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
    'template_suggestion' => 'plain',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e6d55525-abd4-4124-967c-ca0fb31f3f10';
  $display->content['new-e6d55525-abd4-4124-967c-ca0fb31f3f10'] = $pane;
  $display->panels['sidebar'][1] = 'new-e6d55525-abd4-4124-967c-ca0fb31f3f10';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-cc33712e-2113-4584-9eac-8f845da6c759';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['term_nyheder'] = $page;

  return $pages;

}
