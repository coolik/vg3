<?php
/**
 * @file
 * vg3_content_types.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function vg3_content_types_taxonomy_default_vocabularies() {
  return array(
    'researcher' => array(
      'name' => 'Researcher',
      'machine_name' => 'researcher',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'school_and_education' => array(
      'name' => 'School and education',
      'machine_name' => 'school_and_education',
      'description' => '',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
