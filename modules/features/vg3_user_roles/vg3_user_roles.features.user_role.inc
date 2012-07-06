<?php
/**
 * @file
 * vg3_user_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function vg3_user_roles_user_default_roles() {
  $roles = array();

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => '2',
  );

  // Exported role: super editor.
  $roles['super editor'] = array(
    'name' => 'super editor',
    'weight' => '3',
  );

  return $roles;
}
