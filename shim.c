#include <stdio.h>
#include <libhunter-message/message.h>

void hunter_shim(const char *parent)
{
  printf("hunter_shim v1.0.0 (%s)\n", parent ?: "(none)");
  hunter_message("hunter_shim v1.0.0");
}
