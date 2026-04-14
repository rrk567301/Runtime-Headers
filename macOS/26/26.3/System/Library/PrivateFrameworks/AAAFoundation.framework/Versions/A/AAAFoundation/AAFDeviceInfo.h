@interface AAFDeviceInfo : NSObject

+ (BOOL)deviceIsAudioAccessory;
+ (id)localSecretType;
+ (BOOL)deviceIsiPad;
+ (BOOL)isVirtualMachine;
+ (BOOL)isDeviceUnlockedSinceBoot;
+ (BOOL)_hasLocalSecret;

@end
