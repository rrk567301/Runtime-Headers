@class NSString, NSObject;
@protocol OS_os_log;

@interface PS190IODPDevice : NSObject <PS190DeviceHandle> {
    struct __IODPDevice { } *_deviceRef;
    NSObject<OS_os_log> *_log;
}

@property (readonly) NSString *rootPath;

+ (id)first;
+ (id)allDevices;

- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)initWithService:(unsigned int)a0 rootPath:(id)a1;
- (BOOL)readRegisterAddress:(unsigned int)a0 buffer:(void *)a1 length:(unsigned int)a2;
- (BOOL)readRegisterAddressNoErrorLog:(unsigned int)a0 buffer:(void *)a1 length:(unsigned int)a2;
- (BOOL)writeRegisterAddress:(unsigned int)a0 bytes:(const void *)a1 length:(unsigned int)a2;

@end
