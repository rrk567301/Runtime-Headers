@interface BKDeviceManager : NSObject

+ (void)initialize;
+ (id)availableDevices;
+ (id)availableDevicesWithFailure:(char *)a0;

@end
