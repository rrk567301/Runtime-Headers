@interface AAFDeviceInfo : NSObject

+ (BOOL)deviceIsiPad;
+ (BOOL)isDeviceUnlockedSinceBoot;
+ (BOOL)isVirtualMachine;
+ (BOOL)deviceIsAudioAccessory;
+ (id)localSecretType;
+ (BOOL)_hasLocalSecret;

@end
