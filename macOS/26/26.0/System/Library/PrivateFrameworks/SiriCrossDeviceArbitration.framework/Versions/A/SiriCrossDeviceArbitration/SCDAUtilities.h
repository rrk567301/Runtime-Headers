@interface SCDAUtilities : NSObject

+ (BOOL)isPhone;
+ (BOOL)isMac;
+ (BOOL)faceDetectionEnabled;
+ (BOOL)isDeviceUnlocked;
+ (BOOL)isNano;
+ (BOOL)isIPad;
+ (BOOL)isIOS;
+ (BOOL)isHorseman;
+ (BOOL)isVirtualDevice;
+ (BOOL)_hasPearlCameraCapability;
+ (BOOL)accessibilitySupportsAttentionAwareFeatures;
+ (BOOL)deviceCanMakeEmergencyCall;
+ (BOOL)isATV;
+ (BOOL)isCommunal;
+ (BOOL)isReality;

@end
