<?php

/**
 * Views plugin GET parameters in Contextual Filters.
 */

/**
 * Implements hook_views_plugins().
 */
function get_arguments_views_plugins() {
  return array(
    'argument default' => array(
      'param' => array(
        'title' => t('GET parameter from URL'),
        'handler' => 'get_arguments_plugin_argument_default_param',
      ),
    ),
  );
}

/**
 * Default argument plugin to use the GET parameter value from the URL.
 *
 * @ingroup views_argument_default_plugins
 */
class get_arguments_plugin_argument_default_param extends views_plugin_argument_default {
  function option_definition() {
    $options = parent::option_definition();
    $options['parameter'] = array('default' => '');

    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['parameter'] = array(
      '#type' => 'textfield',
      '#title' => t('Parameter key'),
      '#default_value' => $this->options['parameter'],
      '#description' => t('The string key used to identify the parameter.'),
    );
  }

  function get_argument() {
    $params = drupal_get_query_parameters();
    $value = FALSE;
    if (isset($params[$this->options['parameter']])) {
      $value = trim(check_plain($params[$this->options['parameter']]));
    }
    return $value;
  }
}