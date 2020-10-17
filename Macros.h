#ifndef MACROS_H
#define DEBUG


#define DEBUG(fmt, ...) \
  {\
    char buff[80]; \
    snprintf(buff, 80, fmt, ##__VA_ARGS__); \
    Serial.println(buff); \
  }

#endif