define $(_flavor_)_$(_feat_)_MAKE
$(_flavor_)_$(_feat_)_inc=chimney_ctl.h chimney_ctl_types.h chimney_types.h
$(_flavor_)_$(_feat_)_lib_objs=chimney_ctl
$(_flavor_)_$(_feat_)_lib=chimney_ctl
endef

include $(PROJ_MAK_DIR)/epilog.mk
