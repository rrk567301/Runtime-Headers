@interface SCDAUtilities : NSObject

+ (BOOL)isDeviceUnlocked;
+ (BOOL)isIPad;
+ (BOOL)faceDetectionEnabled;
+ (BOOL)isIOS;
+ (BOOL)isPhone;
+ (BOOL)isHorseman;
+ (BOOL)isNano;
+ (BOOL)isMac;
+ (BOOL)isVirtualDevice;
+ (BOOL)_hasPearlCameraCapability;
+ (BOOL)accessibilitySupportsAttentionAwareFeatures;
+ (BOOL)deviceCanMakeEmergencyCall;
+ (BOOL)isATV;
+ (BOOL)isCommunal;
+ (BOOL)isReality;

@end
