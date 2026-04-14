@interface PADevice : NSObject

+ (id)availableDevices;
+ (id)cpuDevice;
+ (id)deviceWithIdentifier:(id)a0;
+ (id)_newDeviceList;

- (int)type;
- (unsigned long long)hash;
- (id)sharedCIContext;
- (id)identifier;
- (BOOL)isEqualToDevice:(id)a0;
- (id)description;
- (id)name;
- (BOOL)isEqual:(id)a0;
- (struct _CGLContextObject { } *)sharedGLContext;
- (struct _cl_context { } *)sharedCLContext;
- (struct _cl_device_id { } *)openCLDeviceID;
- (id)renderFormatForPixelFormat:(id)a0;

@end
