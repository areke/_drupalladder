; Learn Drupal
; -------------

; Core version
; -------------
core = 7.x

; API version
; -----------
api = 2

; Contrib projects
; ----------------
projects[ctools][subdir] = contrib

projects[devel][subdir] = contrib

projects[diff][subdir] = contrib

projects[entity][subdir] = contrib

projects[entityreference][subdir] = contrib

projects[examples][subdir] = contrib

projects[features][subdir] = contrib

projects[feeds][subdir] = contrib

projects[field_group][subdir] = contrib

projects[flag][subdir] = contrib

projects[job_scheduler][subdir] = contrib

projects[ladder][subdir] = contrib

projects[lessons][subdir] = contrib

projects[mollom][subdir] = contrib

projects[node_export][subdir] = contrib

projects[panels][subdir] = contrib

projects[pathauto][subdir] = contrib

projects[rules][subdir] = contrib

; Not including Services module until http://drupal.org/node/1313976 lands
;projects[services][subdir] = contrib
;; services patch: this just adds a third-party library to the rest server /lib directory so it's ready to go without doing this step manually
;projects[services][patch][] = https://raw.github.com/gist/1973788/8e9f8cc095ed3cb4d243639196a51b30a97ce97d/services.spyc.patch

projects[strongarm][subdir] = contrib

projects[token][subdir] = contrib

projects[nodeaccess_userreference][subdir] = contrib

projects[uuid][subdir] = contrib

projects[views][subdir] = contrib
