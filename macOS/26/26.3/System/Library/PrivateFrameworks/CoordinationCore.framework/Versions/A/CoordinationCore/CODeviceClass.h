@interface CODeviceClass : NSObject

+ (int)deviceClass;
+ (BOOL)isAudioAccessory;
+ (BOOL)isAppleTV;
+ (BOOL)isPad;
+ (BOOL)isPhone;

@end
