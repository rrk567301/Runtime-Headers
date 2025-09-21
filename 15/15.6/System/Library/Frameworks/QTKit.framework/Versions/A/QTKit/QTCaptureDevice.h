@interface QTCaptureDevice : NSObject <NSCoding>

+ (id)_linkedDevicesLock;
+ (id)_registeredDeviceClassNames;
+ (id)defaultInputDeviceWithMediaType:(id)a0;
+ (id)deviceWithUniqueID:(id)a0;
+ (id)devicesWithIOType:(int)a0;
+ (id)inputDevices;
+ (id)inputDevicesWithMediaType:(id)a0;
+ (id)tundraBundleIdentifier;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
