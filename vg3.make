; makefile for VG3

; define core version and drush make compatibility

core = 7.x
api = 2

; modules

projects[ctools][subdir] = "contrib"
projects[ctools][download][type] = git
projects[ctools][download][url] = http://git.drupal.org/project/ctools.git
projects[ctools][download][tag] = 7.x-1.0

projects[link][subdir] = "contrib"
projects[link][download][type] = git
projects[link][download][url] = http://git.drupal.org/project/link.git
projects[link][download][tag] = 7.x-1.0

projects[media][subdir] = "contrib"
projects[media][download][type] = git
projects[media][download][url] = http://git.drupal.org/project/media.git
projects[media][download][revision] = 738a19921453979a2aeaffcca2a66a0b5192beb0

projects[menu_import][subdir] = "contrib"
projects[menu_import][download][type] = git
projects[menu_import][download][url] = http://git.drupal.org/project/menu_import.git
projects[menu_import][download][tag] = 7.x-1.2

projects[colorbox][subdir] = "contrib"
projects[colorbox][download][type] = git
projects[colorbox][download][url] = http://git.drupal.org/project/colorbox.git
projects[colorbox][download][tag] = 7.x-1.3

projects[diff][subdir] = "contrib"
projects[diff][download][type] = git
projects[diff][download][url] = http://git.drupal.org/project/diff.git
projects[diff][download][tag] = 7.x-2.0

projects[features][subdir] = "contrib"
projects[features][download][type] = git
projects[features][download][url] = http://git.drupal.org/project/features.git
projects[features][download][tag] = 7.x-1.0-rc3

projects[file_entity][subdir] = "contrib"
projects[file_entity][download][type] = git
projects[file_entity][download][url] = http://git.drupal.org/project/file_entity.git
projects[file_entity][download][tag] = 7.x-2.0-unstable6

projects[references][subdir] = "contrib"
projects[references][download][type] = git
projects[references][download][url] = http://git.drupal.org/project/references.git
projects[references][download][tag] = 7.x-2.0

projects[nodequeue][subdir] = "contrib"
projects[nodequeue][download][type] = git
projects[nodequeue][download][url] = http://git.drupal.org/project/nodequeue.git
projects[nodequeue][download][tag] = 7.x-2.0-beta1

projects[panels][subdir] = "contrib"
projects[panels][download][type] = git
projects[panels][download][url] = http://git.drupal.org/project/panels.git
projects[panels][download][tag] = 7.x-3.2

projects[pathauto][subdir] = "contrib"
projects[pathauto][download][type] = git
projects[pathauto][download][url] = http://git.drupal.org/project/pathauto.git
projects[pathauto][download][tag] = 7.x-1.1

projects[quicktabs][subdir] = "contrib"
projects[quicktabs][download][type] = git
projects[quicktabs][download][url] = http://git.drupal.org/project/quicktabs.git
projects[quicktabs][download][tag] = 7.x-3.4

projects[references_dialog][subdir] = "contrib"
projects[references_dialog][download][type] = git
projects[references_dialog][download][url] = http://git.drupal.org/project/references_dialog.git
projects[references_dialog][download][tag] = 7.x-1.0-alpha4

projects[special_menu_items][subdir] = "contrib"
projects[special_menu_items][download][type] = git
projects[special_menu_items][download][url] = http://git.drupal.org/project/special_menu_items.git
projects[special_menu_items][download][tag] = 7.x-1.0

projects[strongarm][subdir] = "contrib"
projects[strongarm][download][type] = git
projects[strongarm][download][url] = http://git.drupal.org/project/strongarm.git
projects[strongarm][download][tag] = 7.x-2.0

projects[taxonomy_csv][subdir] = "contrib"
projects[taxonomy_csv][download][type] = git
projects[taxonomy_csv][download][url] = http://git.drupal.org/project/taxonomy_csv.git
projects[taxonomy_csv][download][tag] = 7.x-5.10
projects[taxonomy_csv][patch][] = http://drupal.org/files/1528432-options_check_removed.patch

projects[token][subdir] = "contrib"
projects[token][download][type] = git
projects[token][download][url] = http://git.drupal.org/project/token.git
projects[token][download][tag] = 7.x-1.1

projects[views][subdir] = "contrib"
projects[views][download][type] = git
projects[views][download][url] = http://git.drupal.org/project/views.git
projects[views][download][tag] = 7.x-3.3

projects[wysiwyg][subdir] = "contrib"
projects[wysiwyg][download][type] = git
projects[wysiwyg][download][url] = http://git.drupal.org/project/wysiwyg.git
projects[wysiwyg][download][tag] = 7.x-2.1

projects[jquerymenu][subdir] = "contrib"
projects[jquerymenu][download][type] = git
projects[jquerymenu][download][url] = http://git.drupal.org/project/jquerymenu.git
projects[jquerymenu][download][tag] = 7.x-2.0

projects[jw_player][subdir] = "contrib"
projects[jw_player][download][type] = git
projects[jw_player][download][url] = http://git.drupal.org/project/jw_player.git
projects[jw_player][download][tag] = 7.x-1.0-alpha1




;!!! only for developers use, remove for prod

projects[devel][subdir] = "contrib"
projects[devel][download][type] = git
projects[devel][download][url] = http://git.drupal.org/project/devel.git
projects[devel][download][tag] = 7.x-1.3

projects[module_filter][subdir] = "contrib"
projects[module_filter][download][type] = git
projects[module_filter][download][url] = http://git.drupal.org/project/module_filter.git
projects[module_filter][download][tag] = 7.x-1.6

;!!! only for developers use, remove for prod




; libraries

libraries[ckeditor][download][type] = "file"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.2/ckeditor_3.6.2.tar.gz"
libraries[ckeditor][overwrite] = TRUE

libraries[colorbox][download][type] = "file"
libraries[colorbox][download][url] = "http://www.jacklmoore.com/colorbox/colorbox-1.3.18.zip"
libraries[colorbox][overwrite] = TRUE

; libraries[flowplayer][download][type] = "file"
; libraries[flowplayer][download][url] = "http://releases.flowplayer.org/flowplayer/flowplayer-3.2.10.zip"
; libraries[flowplayer][overwrite] = TRUE

; libraries[flowplayer_content][download][type] = "file"
; libraries[flowplayer_content][subdir] = "flowplayer"
; libraries[flowplayer_content][download][url] = "http://releases.flowplayer.org/flowplayer.content/flowplayer.content-3.2.8.swf"


libraries[jwplayer][download][type] = "file"
libraries[jwplayer][download][url] = "http://www.longtailvideo.com/jw/upload/mediaplayer-viral.zip"
libraries[jwplayer][overwrite] = TRUE
