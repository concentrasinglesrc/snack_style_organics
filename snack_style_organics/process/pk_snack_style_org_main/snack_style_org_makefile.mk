#=======================================================================================#
# api_makefile.mk
#=======================================================================================#
#  Created on: Oct 3, 2015
#      Author: puch
#=======================================================================================#

#=======================================================================================#
# DEFINE PACKAGE RULE
#=======================================================================================#
define $(_build_)_$(_curr_)_MAKE
#=======================================================================================#
# OBJECTS DIRECTORY
# e.g: 
#     $(_build_)_$(_curr_)_src_dir=pk_module_N_code/_src
#     or
#     $(_build_)_$(_curr_)_src_dir=_src
#=======================================================================================#
$(_build_)_$(_curr_)_src_dir=_src

#=======================================================================================#
# LIB REQUISITES
#=======================================================================================#

##
 # Object Requisites
 # e.g: $(_build_)_$(_curr_)_lib_objs=$($(_build_)_OBJ_DIR)/my_lib_obj$(_obj_ext_) \
 ##
$(_build_)_$(_curr_)_lib_objs=

##
 # Library Requisites
 # e.g: $(_build_)_$(_curr_)_lib_libs=$($(_build_)_LIB_DIR)/$(_lprefix_)my_lib_lib$(_lib_ext_) \
 ##
$(_build_)_$(_curr_)_lib_libs=

##
 # Target Library
 # e.g: $(_build_)_$(_curr_)_lib_name=my_lib_name
 ##
$(_build_)_$(_curr_)_lib_name=

#=======================================================================================#
# BIN REQUISITES
#=======================================================================================#

##
 # Object Requisites
 # e.g: $(_build_)_$(_curr_)_bin_objs=$($(_build_)_OBJ_DIR)/my_bin_obj$(_obj_ext_) \
 ##
$(_build_)_$(_curr_)_bin_objs=\
   $($(_build_)_OBJ_DIR)/main$(_obj_ext_)                 \
   # \

##
 # Library Requisites
 # e.g: $(_build_)_$(_curr_)_bin_libs=$($(_build_)_LIB_DIR)/$(_lprefix_)my_bin_lib$(_lib_ext_) \
 ##
 ifeq "$(_build_)" "avr"
 $(_build_)_$(_curr_)_bin_libs=\
   $($(_build_)_LIB_DIR)/$(_lprefix_)hamatora_sched$(_lib_ext_)         \
   $($(_build_)_LIB_DIR)/$(_lprefix_)snack_org_lcd$(_lib_ext_)          \
   $($(_build_)_LIB_DIR)/$(_lprefix_)temp_monitor$(_lib_ext_)           \
   $($(_build_)_LIB_DIR)/$(_lprefix_)axial_fan_ctl$(_lib_ext_)          \
   $($(_build_)_LIB_DIR)/$(_lprefix_)heater_ctl$(_lib_ext_)             \
   $($(_build_)_LIB_DIR)/$(_lprefix_)daylight_monitor$(_lib_ext_)       \
   $($(_build_)_LIB_DIR)/$(_lprefix_)snacky_dehyd_ctl$(_lib_ext_)       \
   $($(_build_)_LIB_DIR)/$(_lprefix_)chimney_ctl$(_lib_ext_)            \
   $($(_build_)_LIB_DIR)/$(_lprefix_)pid_ctl$(_lib_ext_)                \
   $($(_build_)_LIB_DIR)/$(_lprefix_)snack_power_mode$(_lib_ext_)       \
   $($(_build_)_LIB_DIR)/$(_lprefix_)snack_org_friends$(_lib_ext_)      \
   $($(_build_)_LIB_DIR)/$(_lprefix_)arduino_fwk$(_lib_ext_)            \
   $($(_build_)_LIB_DIR)/$(_lprefix_)arduino_core$(_lib_ext_)           \
   $($(_build_)_LIB_DIR)/$(_lprefix_)hama_dbg_trace$(_lib_ext_)         \
#\
 
 else
 $(_build_)_$(_curr_)_bin_libs=\
   $($(_build_)_LIB_DIR)/$(_lprefix_)hamatora_sched$(_lib_ext_)         \
   $($(_build_)_LIB_DIR)/$(_lprefix_)snack_org_lcd$(_lib_ext_)          \
   $($(_build_)_LIB_DIR)/$(_lprefix_)temp_monitor$(_lib_ext_)           \
   $($(_build_)_LIB_DIR)/$(_lprefix_)axial_fan_ctl$(_lib_ext_)          \
   $($(_build_)_LIB_DIR)/$(_lprefix_)heater_ctl$(_lib_ext_)             \
   $($(_build_)_LIB_DIR)/$(_lprefix_)daylight_monitor$(_lib_ext_)       \
   $($(_build_)_LIB_DIR)/$(_lprefix_)snacky_dehyd_ctl$(_lib_ext_)       \
   $($(_build_)_LIB_DIR)/$(_lprefix_)chimney_ctl$(_lib_ext_)            \
   $($(_build_)_LIB_DIR)/$(_lprefix_)pid_ctl$(_lib_ext_)                \
   $($(_build_)_LIB_DIR)/$(_lprefix_)snack_power_mode$(_lib_ext_)       \
   $($(_build_)_LIB_DIR)/$(_lprefix_)snack_org_friends$(_lib_ext_)      \
   $($(_build_)_LIB_DIR)/$(_lprefix_)arduino_fwk$(_lib_ext_)            \
   $($(_build_)_LIB_DIR)/$(_lprefix_)hama_dbg_trace$(_lib_ext_)         \
#\
   $($(_build_)_LIB_DIR)/$(_lprefix_)power_mode$(_lib_ext_)             \
    
 endif

##
 # Target Binary
 # e.g: $(_build_)_$(_curr_)_bin_name=my_bin_name
 ##
$(_build_)_$(_curr_)_bin_name=snack_style_org_launcher
#=======================================================================================#
# END PACKAGE RULE
#=======================================================================================#
endef
#=======================================================================================#
# LOCAL VARIABLES
#=======================================================================================#

#=======================================================================================#
# LOCAL DEFINES 
#=======================================================================================#

#=======================================================================================#
# LOCAL DEFINE EXPANSIONS
#=======================================================================================#

#=======================================================================================#
# LOCAL RULES EXPANSIONS
#=======================================================================================#

#=======================================================================================#
# INCLUDE PK PROJECT UTILITY
#=======================================================================================#
include $($(_build_)_PROJECT_DIR)/$($(_build_)_MAK_DIR)/epilog.mk
#=======================================================================================#
# api_makefile.mk
#=======================================================================================#
# Changes Log
#
#
#=======================================================================================#

