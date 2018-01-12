<?php

/**
 * @file
 * Defines history_rec related Views plugins.
 */

/**
 * Implements hook_views_plugins().
 */
function history_rec_views_plugins() {
  return array(
    'module' => 'history_rec',
    'argument default' => array(
      'history_rec_current_user' => array(
        'title' => t('User ID from logged in user or euid from history_rec_ext_users'),
        'handler' => 'history_rec_views_plugin_argument_default_current_user',
        'path' => drupal_get_path('module', 'history_rec') . '/includes',
      ),
    ),
  );
}
