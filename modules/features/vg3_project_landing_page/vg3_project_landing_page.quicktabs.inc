<?php
/**
 * @file
 * vg3_project_landing_page.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function vg3_project_landing_page_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'exercise';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Exercise project page menu';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'project_page',
      'display' => 'block_4',
      'args' => '',
      'title' => 'Exercise',
      'weight' => '-100',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'accordion';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array(
    'history' => 0,
    'jquery_ui' => array(
      'autoHeight' => 1,
      'collapsible' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Exercise');
  t('Exercise project page menu');

  $export['exercise'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'project_page';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Project taxonomy page';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'taxonomy_block',
      'display' => 'block',
      'args' => '',
      'title' => '7.-10.kl.',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'taxonomy_block',
      'display' => 'block_1',
      'args' => '',
      'title' => 'Gymnasier & HF',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('7.-10.kl.');
  t('Gymnasier & HF');
  t('Project taxonomy page');

  $export['project_page'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'project_page_video_menu';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Project page video menu';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'project_page',
      'display' => 'block_5',
      'args' => '',
      'title' => 'Video',
      'weight' => '-100',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'accordion';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array(
    'history' => 0,
    'jquery_ui' => array(
      'autoHeight' => 1,
      'collapsible' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Project page video menu');
  t('Video');

  $export['project_page_video_menu'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'reading_materials_menu';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Reading materials menu';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'project_page',
      'display' => 'block_3',
      'args' => '',
      'title' => 'Reading materials',
      'weight' => '-100',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'accordion';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array(
    'history' => 0,
    'jquery_ui' => array(
      'autoHeight' => 1,
      'collapsible' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Reading materials');
  t('Reading materials menu');

  $export['reading_materials_menu'] = $quicktabs;

  return $export;
}
