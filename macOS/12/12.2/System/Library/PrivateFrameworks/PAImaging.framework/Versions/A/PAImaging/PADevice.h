@interface PADevice : NSObject

+ (id)cpuDevice;
+ (id)deviceWithIdentifier:(id)a0;
+ (id)availableDevices;
+ (id)_newDeviceList;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)name;
- (int)type;
- (id)identifier;
- (BOOL)isEqualToDevice:(id)a0;
- (id)sharedCIContext;
- (struct _CGLContextObject { } *)sharedGLContext;
- (struct _cl_device_id { } *)openCLDeviceID;
- (struct _cl_context { } *)sharedCLContext;
- (id)renderFormatForPixelFormat:(id)a0;

@end
