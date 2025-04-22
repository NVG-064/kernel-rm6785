# AnyKernel3 Ramdisk Mod Script
# osm0sis @ xda-developers

properties() {
  do.devicecheck=0
  do.modules=0
  do.systemless=1
  do.cleanup=1
  do.cleanuponabort=0
  device.name1=rm6785
}

dump_boot() {
  split_boot
}

write_boot() {
  flash_boot
}
