<?php

/**
 * @file
 * Contains the current user and history_rec euid argument default plugin.
 */

/**
 * Default argument plugin to extract the global $user
 */
class history_rec_views_plugin_argument_default_current_user extends views_plugin_argument_default {
  function get_argument() {
    global $user;

    // If user is logged in, then return its uid.
    // If not load external uid from `history_rec_ext_users`.
    if (!empty($user->uid)) {
      return $user->uid;
    }
    else {
      $euid = history_rec_get_euid();
      return $euid;
    }
  }
}
