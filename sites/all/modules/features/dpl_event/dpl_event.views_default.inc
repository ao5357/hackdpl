<?php
/**
 * @file
 * dpl_event.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function dpl_event_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'event';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Event';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date_rep']['id'] = 'field_date_rep';
  $handler->display->display_options['fields']['field_date_rep']['table'] = 'field_data_field_date_rep';
  $handler->display->display_options['fields']['field_date_rep']['field'] = 'field_date_rep';
  $handler->display->display_options['fields']['field_date_rep']['label'] = '';
  $handler->display->display_options['fields']['field_date_rep']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_rep']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_date_rep']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_date_rep']['delta_offset'] = '0';
  /* Sort criterion: Content: Date -  start date (field_date_rep) */
  $handler->display->display_options['sorts']['field_date_rep_value']['id'] = 'field_date_rep_value';
  $handler->display->display_options['sorts']['field_date_rep_value']['table'] = 'field_data_field_date_rep';
  $handler->display->display_options['sorts']['field_date_rep_value']['field'] = 'field_date_rep_value';
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
    'event' => 'event',
  );
  /* Filter criterion: Content: Date -  start date (field_date_rep) */
  $handler->display->display_options['filters']['field_date_rep_value']['id'] = 'field_date_rep_value';
  $handler->display->display_options['filters']['field_date_rep_value']['table'] = 'field_data_field_date_rep';
  $handler->display->display_options['filters']['field_date_rep_value']['field'] = 'field_date_rep_value';
  $handler->display->display_options['filters']['field_date_rep_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_rep_value']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_date_rep_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_date_rep_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_date_rep_value']['add_delta'] = 'yes';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'event';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Upcoming Events';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'View all';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['block_description'] = 'Upcoming Events';
  $export['event'] = $view;

  return $export;
}
