; This make file is intended for use only by developers who are working on
; this install profile. It should only be run from reset.sh.

; Basically, this make file includes drupal-org.make, but removes the other
; Drupal Ladder projects on d.o (ladder, lessons) so that they can be cloned
; as git repos instead of downloaded normally. This makes it easier to also
; make tweaks to those sub-projects, create patches for them, etc.

; Start with the base make file
includes[base] = "drupal-org.make"

; Override the sub-projects: do not download. These are cloned from git in
; rebuild.sh
projects[ladder] = FALSE
projects[lessons] = FALSE
