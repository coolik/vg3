<?php
/**
 * @file
 * vg3_project_landing_page.jw_player_presets.inc
 */

/**
 * Implements hook_default_jw_player_presets().
 */
function vg3_project_landing_page_default_jw_player_presets() {
  $export = array();

  $jw_player_preset = new stdClass();
  $jw_player_preset->disabled = FALSE; /* Edit this to true to make a default jw_player_preset disabled initially */
  $jw_player_preset->api_version = 1;
  $jw_player_preset->preset_name = 'View-video';
  $jw_player_preset->machine_name = 'view_video';
  $jw_player_preset->description = '';
  $jw_player_preset->settings = array(
    'mode' => 'flash',
    'width' => '300',
    'height' => '200',
    'controlbar' => 'bottom',
    'skin' => '',
    'autoplay' => 0,
  );
  $export['view_video'] = $jw_player_preset;

  return $export;
}
