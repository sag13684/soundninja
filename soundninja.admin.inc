<?php

/** @file
 * soundninja related admin functions
 *
 */

function soundninja_admin_settings() {
  $form['soundninja_client_id'] = array(
    '#title' => t('Client id'),
    '#description' => t('Enter your soundninja client id'),
    '#type' => 'textfield',
    '#default_value' => variable_get('soundninja_client_id', ''),
    '#required' => TRUE,
  );

  $form['soundninja_access_key'] = array(
    '#title' => t('Access key'),
    '#description' => t('Enter your soundninja access key'),
    '#type' => 'textfield',
    '#default_value' => variable_get('soundninja_access_key', ''),
    '#required' => TRUE,
  );

  return system_settings_form($form);
}