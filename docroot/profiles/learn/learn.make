; Learn Drupal 
; -------------

; Core version
; -------------
core = 7.x

; API version
; -----------
api = 2

; Core project
; ------------
projects[] = drupal

; Contrib projects
; ----------------
projects[ctools][subdir] = contrib

projects[devel][subdir] = contrib 

projects[diff][subdir] = contrib 

projects[entity][subdir] = contrib 

projects[entityreference][subdir] = contrib 

projects[features][subdir] = contrib

projects[feeds][subdir] = contrib

projects[field_group][subdir] = contrib

projects[flag][subdir] = contrib

projects[job_scheduler][subdir] = contrib

projects[ladder][type] = module
projects[ladder][download][type] = git
projects[ladder][download][url] = http://git.drupal.org/project/ladder.git
projects[ladder][download][branch] = 7.x-1.x
projects[ladder][subdir] = contrib

projects[lessons][type] = module
projects[lessons][download][type] = git
projects[lessons][download][url] = http://git.drupal.org/project/lessons.git
projects[lessons][download][branch] = 7.x-1.x
projects[lessons][subdir] = contrib

projects[node_export][patch] = http://drupal.org/files/fix-scary-error-message-1467976-1.patch
projects[node_export][subdir] = contrib

projects[pathauto][subdir] = contrib

projects[rules][subdir] = contrib

; services patch: this just adds a third-party library to the rest server /lib directory so it's ready to go without doing this step manually
projects[services][patch][] = https://raw.github.com/gist/1973788/8e9f8cc095ed3cb4d243639196a51b30a97ce97d/services.spyc.patch
projects[services][subdir] = contrib

projects[token][subdir] = contrib

projects[strongarm][subdir] = contrib 

; uuid patch: fixes ugly red undefined variable error on install. Should be unnecessary after 7.x-1.0-alpha3
projects[uuid][patch][] = https://raw.github.com/gist/1974649/8fcc511144638b40b7e951daedf3e821875c611e/uuid-fix-undefined-variable-error.patch
projects[uuid][subdir] = contrib

projects[views][subdir] = contrib
