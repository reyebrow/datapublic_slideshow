<?php
/**
 * @file
 * datapublic_slideshow.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function datapublic_slideshow_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'slideshow';
  $context->description = '';
  $context->tag = 'Slideshow';
  $context->conditions = array();
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-slideshow-block' => array(
          'module' => 'views',
          'delta' => 'slideshow-block',
          'region' => 'pre_content',
          'weight' => '-10',
        ),
      ),
    ),
    'includelibraries' => array(
      'library_name' => array(
        're_orbit:re_orbit' => 're_orbit:re_orbit',
      ),
      'library_debug' => 0,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Slideshow');
  $export['slideshow'] = $context;

  return $export;
}
