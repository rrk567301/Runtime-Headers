@interface PADevice : NSObject

+ (id)cpuDevice;
+ (id)deviceWithIdentifier:(id)a0;
+ (id)availableDevices;
+ (id)_newDeviceList;

- (id)name;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (int)type;
- (id)identifier;
- (id)sharedCIContext;
- (BOOL)isEqualToDevice:(id)a0;
- (struct _CGLContextObject { } *)sharedGLContext;
- (struct _cl_device_id { } *)openCLDeviceID;
- (struct _cl_context { } *)sharedCLContext;
- (id)renderFormatForPixelFormat:(id)a0;

@end
