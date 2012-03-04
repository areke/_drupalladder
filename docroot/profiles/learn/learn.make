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

projects[field_group][subdir] = contrib

projects[flag][subdir] = contrib

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

projects[pathauto][subdir] = contrib

projects[token][subdir] = contrib

projects[rules][subdir] = contrib

projects[services][subdir] = contrib

projects[strongarm][subdir] = contrib 

projects[uuid][subdir] = contrib
projects[uuid][version] = 1.0-alpha3

projects[views][subdir] = contrib
