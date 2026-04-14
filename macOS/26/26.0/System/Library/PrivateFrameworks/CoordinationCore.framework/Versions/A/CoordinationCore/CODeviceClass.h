@interface CODeviceClass : NSObject

+ (BOOL)isAudioAccessory;
+ (BOOL)isPad;
+ (BOOL)isPhone;
+ (int)deviceClass;
+ (BOOL)isAppleTV;

@end
