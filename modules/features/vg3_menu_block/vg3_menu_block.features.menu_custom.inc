<?php
/**
 * @file
 * vg3_menu_block.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function vg3_menu_block_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-sidebar-menu.
  $menus['menu-sidebar-menu'] = array(
    'menu_name' => 'menu-sidebar-menu',
    'title' => 'Sidebar menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Sidebar menu');


  return $menus;
}
