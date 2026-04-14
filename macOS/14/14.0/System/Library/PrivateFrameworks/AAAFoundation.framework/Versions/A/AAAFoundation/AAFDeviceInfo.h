@interface AAFDeviceInfo : NSObject

+ (BOOL)deviceIsAudioAccessory;
+ (BOOL)isDeviceUnlockedSinceBoot;
+ (BOOL)deviceIsiPad;

@end
