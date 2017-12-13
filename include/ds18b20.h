#ifndef CS_MOS_LIBS_DS18B20_H_
#define CS_MOS_LIBS_DS18B20_H_

#if defined(__cplusplus)
extern "C" {  // Make sure we have C-declarations in C++ programs
#endif

struct ds18b20_result {
    uint8_t rom[8];
    char *mac;
    float temp;
    struct ds18b20_result *next;
};

typedef void (*ds18b20_read_t)(struct ds18b20_result *results);

void ds18b20_read_all(int pin, int resolutionBits, ds18b20_read_t callback);


#if defined(__cplusplus)
}
#endif


#endif