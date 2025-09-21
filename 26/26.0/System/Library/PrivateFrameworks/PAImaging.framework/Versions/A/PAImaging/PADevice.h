@interface PADevice : NSObject

+ (id)availableDevices;
+ (id)cpuDevice;
+ (id)deviceWithIdentifier:(id)a0;
+ (id)_newDeviceList;

- (id)identifier;
- (int)type;
- (id)description;
- (id)name;
- (id)sharedCIContext;
- (BOOL)isEqualToDevice:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (struct _CGLContextObject { } *)sharedGLContext;
- (struct _cl_context { } *)sharedCLContext;
- (struct _cl_device_id { } *)openCLDeviceID;
- (id)renderFormatForPixelFormat:(id)a0;

@end
