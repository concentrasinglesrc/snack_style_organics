define $(_flavor_)_$(_feat_)_MAKE
$(_flavor_)_$(_feat_)_inc=sso_task_def.h
 $(_flavor_)_$(_feat_)_bin_libs=\
   app \
   cobject \
   ipc \
   template \
#\
   power_mode             \
    
$(_flavor_)_$(_feat_)_bin=sso_launcher

endef

include $(PROJ_MAK_DIR)/epilog.mk
