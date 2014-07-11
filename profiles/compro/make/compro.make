api = 2
core = 7.x

; Core + Patches
; ---------------------
projects[] = drupal

; Contrib Modules
; ---------------------
projects[context][subdir] = contrib
projects[ctools][subdir] = contrib
projects[devel][subdir] = contrib
projects[diff][subdir] = contrib
projects[features][subdir] = contrib
projects[features_extra][subdir] = contrib
projects[strongarm][subdir] = contrib
projects[views][subdir] = contrib
projects[module_filter][subdir] = contrib
projects[admin_menu][subdir] = contrib
projects[token][subdir] = contrib
projects[pathauto][subdir] = contrib
projects[metatag][subdir] = contrib
projects[block_class][subdir] = contrib
projects[entity][subdir] = contrib
projects[globalredirect][subdir] = contrib
projects[adminimal_admin_menu][subdir] = contrib
projects[blockify][subdir] = contrib

; Custom Modules
--------------------
projects[compro_custom][download][type] = "git"
projects[compro_custom][download][url] = "https://tomgeekery@bitbucket.org/alexfisher/compro_custom.git"
projects[compro_custom][type] = "module"
projects[compro_custom][subdir] = "custom"

projects[compro_credit][download][type] = "git"
projects[compro_credit][download][url] = "https://tomgeekery@bitbucket.org/tomgeekery/compro_credit.git"
projects[compro_credit][type] = "module"
projects[compro_credit][subdir] = "custom"

; Profile
; ----------
projects[compro][type] = profile
projects[compro][download][type] = git
projects[compro][download][url] = https://tomgeekery@bitbucket.org/alexfisher/compro_install_profile.git

; Themes
; ----------
projects[] = adminimal_theme
