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
    'researcher_23_28775' => array(
      'name' => 'Researcher',
      'machine_name' => 'researcher_23_28775',
      'description' => 'Vocabulary created automatically by Taxonomy csv import/export module',
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
    'school_education4_484' => array(
      'name' => 'School & education',
      'machine_name' => 'school_education4_484',
      'description' => 'Vocabulary created automatically by Taxonomy csv import/export module',
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
  );
}
