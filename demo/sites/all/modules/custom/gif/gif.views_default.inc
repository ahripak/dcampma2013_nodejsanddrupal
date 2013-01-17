<?php
/**
 * @file
 * gif.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gif_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'felines';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Felines';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '300';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'masonry_views_grid';
  $handler->display->display_options['style_options']['masonry_width'] = TRUE;
  $handler->display->display_options['style_options']['masonry_animated'] = TRUE;
  $handler->display->display_options['style_options']['masonry_animated_duration'] = TRUE;
  $handler->display->display_options['style_options']['masonry_resizable'] = TRUE;
  $handler->display->display_options['style_options']['masonry_center'] = FALSE;
  $handler->display->display_options['style_options']['masonry_gutter'] = TRUE;
  $handler->display->display_options['style_options']['masonry_rtl'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div id="counter">Now serving <span id="number"><?php echo variable_get(\'gif_count\', 0); ?></span> felines.</div>
<h1><span>g</span>raphics</h1>
<h1><span>i</span>nterchange</h1>
<h1><span>f</span>elines</h1>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  /* Field: Content: Feline */
  $handler->display->display_options['fields']['field_feline']['id'] = 'field_feline';
  $handler->display->display_options['fields']['field_feline']['table'] = 'field_data_field_feline';
  $handler->display->display_options['fields']['field_feline']['field'] = 'field_feline';
  $handler->display->display_options['fields']['field_feline']['label'] = '';
  $handler->display->display_options['fields']['field_feline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_feline']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_feline']['settings'] = array(
    'image_style' => 'gif',
    'image_link' => '',
  );
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'felines';
  $export['felines'] = $view;

  return $export;
}
