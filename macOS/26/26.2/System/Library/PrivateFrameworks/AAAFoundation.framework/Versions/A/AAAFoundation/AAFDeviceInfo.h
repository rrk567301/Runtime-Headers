@interface AAFDeviceInfo : NSObject

+ (BOOL)deviceIsiPad;
+ (BOOL)isVirtualMachine;
+ (BOOL)isDeviceUnlockedSinceBoot;
+ (BOOL)deviceIsAudioAccessory;
+ (id)localSecretType;
+ (BOOL)_hasLocalSecret;

@end
