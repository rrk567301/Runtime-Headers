@interface AAFDeviceInfo : NSObject

+ (BOOL)isDeviceUnlockedSinceBoot;
+ (id)localSecretType;
+ (BOOL)deviceIsiPad;
+ (BOOL)isVirtualMachine;
+ (BOOL)deviceIsAudioAccessory;
+ (BOOL)_hasLocalSecret;

@end
