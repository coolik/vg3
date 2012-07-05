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
  $quicktabs->machine_name = 'project_page';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Project page';
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
  t('Project page');

  $export['project_page'] = $quicktabs;

  return $export;
}
