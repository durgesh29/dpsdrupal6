<?php

/**
 * @file
 * create, update and modify
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function updated_news_user_default_permissions() {
  $permissions = array();

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'manager',
    ),
  );

  // Exported permission: administer ckeditor
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer nodes
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: edit field_news_date
  $permissions['edit field_news_date'] = array(
    'name' => 'edit field_news_date',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: edit field_news_image
  $permissions['edit field_news_image'] = array(
    'name' => 'edit field_news_image',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: edit field_news_url
  $permissions['edit field_news_url'] = array(
    'name' => 'edit field_news_url',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: view field_news_date
  $permissions['view field_news_date'] = array(
    'name' => 'view field_news_date',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: view field_news_image
  $permissions['view field_news_image'] = array(
    'name' => 'view field_news_image',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: view field_news_url
  $permissions['view field_news_url'] = array(
    'name' => 'view field_news_url',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  return $permissions;
}
