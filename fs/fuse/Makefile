#
# Makefile for the FUSE filesystem.
#

obj-$(CONFIG_FUSE_FS) += fuse.o
obj-$(CONFIG_CUSE) += cuse.o

fuse-objs := dev.o dir.o file.o inode.o control.o xattr.o acl.o
fuse-$(CONFIG_OPLUS_FEATURE_FUSE_FS_SHORTCIRCUIT) += shortcircuit.o
fuse-objs += passthrough.o
