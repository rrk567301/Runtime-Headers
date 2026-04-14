@interface SCDAUtilities : NSObject

+ (BOOL)isMac;
+ (BOOL)faceDetectionEnabled;
+ (BOOL)isIOS;
+ (BOOL)isNano;
+ (BOOL)isIPad;
+ (BOOL)isDeviceUnlocked;
+ (BOOL)isHorseman;
+ (BOOL)isPhone;
+ (BOOL)isVirtualDevice;
+ (BOOL)_hasPearlCameraCapability;
+ (BOOL)accessibilitySupportsAttentionAwareFeatures;
+ (BOOL)deviceCanMakeEmergencyCall;
+ (BOOL)isATV;
+ (BOOL)isCommunal;
+ (BOOL)isReality;

@end
