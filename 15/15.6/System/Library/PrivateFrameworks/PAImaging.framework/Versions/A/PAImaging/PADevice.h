@interface PADevice : NSObject

+ (id)cpuDevice;
+ (id)deviceWithIdentifier:(id)a0;
+ (id)availableDevices;
+ (id)_newDeviceList;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)name;
- (id)identifier;
- (int)type;
- (id)sharedCIContext;
- (char)isEqualToDevice:(id)a0;
- (struct _CGLContextObject { } *)sharedGLContext;
- (struct _cl_context { } *)sharedCLContext;
- (struct _cl_device_id { } *)openCLDeviceID;
- (id)renderFormatForPixelFormat:(id)a0;

@end
