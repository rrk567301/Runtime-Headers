@interface AAFDeviceInfo : NSObject

+ (BOOL)deviceIsiPad;
+ (BOOL)isDeviceUnlockedSinceBoot;
+ (BOOL)deviceIsAudioAccessory;
+ (BOOL)isVirtualMachine;
+ (id)localSecretType;
+ (BOOL)_hasLocalSecret;

@end
