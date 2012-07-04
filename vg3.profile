<?php
/**
 * @file
 * Installation profile for tests.
 */

/**
 * Implements hook_form_FORM_ID_alter().
 */
function vg3_form_install_configure_form_alter(&$form, $form_state) {
  // basic site information
  $form['site_information']['site_name']['#default_value'] = 'VG3';
  $form['site_information']['site_mail']['#default_value'] = 'noreply@vg3.local';

  // set the admin username and password to make reinstalls less painful
  $form['admin_account']['account']['name']['#default_value'] = 'admin';
  $form['admin_account']['account']['mail']['#default_value'] = 'noreply@vg3.local';

  $form['admin_account']['account']['pass']['#type'] = 'hidden';
  $form['admin_account']['account']['pass']['#value'] = '1234';

  $form['admin_account']['account']['pass_help']['#markup'] = '<p><strong>'. t('The admin password has been set automatically.') .'</strong></p>';

  // set default timezone
  $form['server_settings']['date_default_timezone']['#default_value'] = 'Europe/Chisinau';

  // disable automatic client timezone detection
  unset($form['server_settings']['date_default_timezone']['#attributes']);

  // don't send update e-mails
  $form['update_notifications']['update_status_module']['#default_value'] = array(1);
}
