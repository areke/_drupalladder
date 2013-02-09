; Drupal Ladder
; -------------

; Core version
; -------------
core = 7.x

; API version
; -----------
api = 2

; Contrib projects
; ----------------
projects[ctools][version] = 1.2
projects[ctools][subdir] = contrib

projects[devel][version] = 1.3
projects[devel][subdir] = contrib

projects[diff][version] = 2.0
projects[diff][subdir] = contrib

projects[entity][version] = 1.0-rc3
projects[entity][subdir] = contrib

projects[entityreference][version] = 1.0-rc5
projects[entityreference][subdir] = contrib

projects[examples][version] = 1.x-dev
projects[examples][subdir] = contrib

projects[extlink][version] = 1.12
projects[extlink][subdir] = contrib

projects[features][version] = 1.0
projects[features][subdir] = contrib

projects[feeds][version] = 2.0-alpha7
projects[feeds][subdir] = contrib

projects[field_group][version] = 1.1
projects[field_group][subdir] = contrib

projects[flag][version] = 2.0
projects[flag][subdir] = contrib
; Patch a but that causes a Strict Warning
; drupalladder issue: http://drupal.org/node/1834992
; Flag patch: http://drupal.org/node/1475040#comment-6599260
projects[flag][patch][] = http://drupal.org/files/flag-fix_method_declaration-1475040-15.patch

projects[job_scheduler][version] = 2.0-alpha3
projects[job_scheduler][subdir] = contrib

projects[ladder][version] = 1.0-alpha6
projects[ladder][subdir] = contrib

projects[lessons][version] = 1.0-alpha10
projects[lessons][subdir] = contrib

projects[mollom][version] = 2.3
projects[mollom][subdir] = contrib

projects[node_export][type] = module
projects[node_export][download][type] = git
; Node Export version 7.x-3.x-dev including commit:
; http://drupal.org/commitlog/commit/6132/301c61096282cebfdfd23ee64aef7d194f3138e7
; to fix "Undefined property user name error" http://drupal.org/node/1467976
projects[node_export][download][branch] = 7.x-3.x
projects[node_export][download][revision] = 301c61096282cebfdfd23ee64aef7d194f3138e7
projects[node_export][subdir] = contrib

projects[panels][version] = 3.3
projects[panels][subdir] = contrib

projects[pathauto][version] = 1.2
projects[pathauto][subdir] = contrib

projects[rules][type] = module
projects[rules][download][type] = git
; Rules version 7.x-2.x-dev including commit:
; http://drupalcode.org/project/rules.git/commit/6050ca6
; to remove rules.make file http://drupal.org/node/1329346
projects[rules][download][branch] = 7.x-2.x
projects[rules][download][revision] = 6050ca6ae22080879672fa698357f5ec41d4ff74
projects[rules][subdir] = contrib

; Not including Services module until http://drupal.org/node/1313976 lands
;projects[services][version] = 3.1
;projects[services][subdir] = contrib
;; services patch: this just adds a third-party library to the rest server /lib directory so it's ready to go without doing this step manually
;projects[services][patch][] = https://raw.github.com/gist/1973788/8e9f8cc095ed3cb4d243639196a51b30a97ce97d/services.spyc.patch

projects[strongarm][version] = 2.0
projects[strongarm][subdir] = contrib

projects[token][version] = 1.4
projects[token][subdir] = contrib

projects[nodeaccess_userreference][version] = 3.9
projects[nodeaccess_userreference][subdir] = contrib
; Temporary hack: cut out the requirements check in nodeaccess_userreference
; so that Drupal can install.
; Ladder issue: http://drupal.org/node/1671410#comment-6439790
; nodeaccess_userreference issue: http://drupal.org/node/1774488#comment-6615562
projects[nodeaccess_userreference][patch][] = http://drupal.org/files/nodeaccess_userreference-install-profile-3.patch

projects[uuid][type] = module
projects[uuid][download][type] = git
; UUID version 7.x-2.x-dev including commit:
; http://drupalcode.org/project/uuid.git/commitdiff/c2bb83250451c96be843d11837a43f98d414c76f
; (see http://drupal.org/node/1423542#comment-5555026 )
; to avoid Undefined Index error. Should be unnecessary after 7.x-1.0-alpha3.
projects[uuid][download][branch] = 7.x-1.x
projects[uuid][download][revision] = c2bb83250451c96be843d11837a43f98d414c76f
projects[uuid][subdir] = contrib

projects[views][version] = 3.5
projects[views][subdir] = contrib
