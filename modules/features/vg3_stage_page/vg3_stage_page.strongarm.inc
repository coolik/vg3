<?php
/**
 * @file
 * vg3_stage_page.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function vg3_stage_page_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_stages_pattern';
  $strongarm->value = '[node:field_stage_type]/[node:nid]';
  $export['pathauto_node_stages_pattern'] = $strongarm;

  return $export;
}
