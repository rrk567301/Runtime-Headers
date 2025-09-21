@interface AAFDeviceInfo : NSObject

+ (char)deviceIsAudioAccessory;
+ (char)isVirtualMachine;
+ (char)isDeviceUnlockedSinceBoot;
+ (id)localSecretType;
+ (char)deviceIsiPad;
+ (char)_hasLocalSecret;

@end
