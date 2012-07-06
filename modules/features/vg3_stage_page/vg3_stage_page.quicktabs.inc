<?php
/**
 * @file
 * vg3_stage_page.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function vg3_stage_page_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'tabs_stage_landing_page';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Tabs for stage landing page';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'stage_landing_page',
      'display' => 'stage_page_projects',
      'args' => '',
      'title' => 'Projekter',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'stage_landing_page',
      'display' => 'stage_page_researches',
      'args' => '',
      'title' => 'Forskere',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'stage_landing_page',
      'display' => 'stage_page_videos',
      'args' => '',
      'title' => 'Videoer',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'stage_landing_page',
      'display' => 'stage_page_photos',
      'args' => '',
      'title' => 'Billeder',
      'weight' => '-97',
      'type' => 'view',
    ),
    4 => array(
      'vid' => 'stage_landing_page',
      'display' => 'stage_page_info',
      'args' => '',
      'title' => 'Info',
      'weight' => '-96',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Billeder');
  t('Forskere');
  t('Info');
  t('Projekter');
  t('Tabs for stage landing page');
  t('Videoer');

  $export['tabs_stage_landing_page'] = $quicktabs;

  return $export;
}
