#include <stdio.h>
#include <libhunter-message/message.h>
#include <libhunter-unrelated/unrelated.h>

void hunter_shim(const char *parent)
{
  printf("hunter_shim v1.0.0 (%s)\n", parent ?: "(none)");
  hunter_message("hunter_shim v1.0.0");
  hunter_unrelated("hunter_shum v1.0.0");
}
