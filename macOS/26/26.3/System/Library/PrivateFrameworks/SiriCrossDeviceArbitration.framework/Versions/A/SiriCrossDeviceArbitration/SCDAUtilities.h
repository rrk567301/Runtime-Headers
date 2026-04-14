@interface SCDAUtilities : NSObject

+ (BOOL)isNano;
+ (BOOL)isMac;
+ (BOOL)faceDetectionEnabled;
+ (BOOL)isHorseman;
+ (BOOL)isIOS;
+ (BOOL)isIPad;
+ (BOOL)isPhone;
+ (BOOL)isDeviceUnlocked;
+ (BOOL)isVirtualDevice;
+ (BOOL)_hasPearlCameraCapability;
+ (BOOL)accessibilitySupportsAttentionAwareFeatures;
+ (BOOL)deviceCanMakeEmergencyCall;
+ (BOOL)isATV;
+ (BOOL)isCommunal;
+ (BOOL)isReality;

@end
