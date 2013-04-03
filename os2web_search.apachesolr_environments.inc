<?php
/**
 * @file
 * os2web_search.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function os2web_search_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'os2web_search_enviroment';
  $environment->name = 'OS2web_search_enviroment';
  $environment->url = 'http://localhost:8983/solr';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_read_only' => '0',
    'apachesolr_search_facet_pages' => '',
  );
  $environment->index_bundles = array();
  $export['os2web_search_enviroment'] = $environment;

  return $export;
}
