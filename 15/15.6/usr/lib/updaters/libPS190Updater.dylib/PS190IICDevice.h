@class NSString, NSObject;
@protocol OS_os_log;

@interface PS190IICDevice : NSObject <PS190DeviceHandle> {
    NSObject<OS_os_log> *_log;
    unsigned int _service;
    unsigned int _connection;
}

@property (readonly) unsigned int instanceID;
@property (readonly) NSString *serviceName;

+ (id)first;
+ (id)allDevices;
+ (id)allDeviceNames;

- (void)dealloc;
- (void).cxx_destruct;
- (char)initIICService;
- (id)initWithInstanceID:(unsigned int)a0;
- (int)readAddress:(const void *)a0 readAddressSize:(unsigned long long)a1 buffer:(void *)a2 bufferLength:(unsigned long long)a3;
- (char)readRegisterAddress:(unsigned int)a0 buffer:(void *)a1 length:(unsigned int)a2;
- (char)readRegisterAddressNoErrorLog:(unsigned int)a0 buffer:(void *)a1 length:(unsigned int)a2;
- (int)writeBuffer:(id)a0;
- (char)writeRegisterAddress:(unsigned int)a0 bytes:(const void *)a1 length:(unsigned int)a2;

@end
