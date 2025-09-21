@interface SCDAUtilities : NSObject

+ (char)isMac;
+ (char)isPhone;
+ (char)isDeviceUnlocked;
+ (char)faceDetectionEnabled;
+ (char)isIOS;
+ (char)isNano;
+ (char)isHorseman;
+ (char)_hasPearlCameraCapability;
+ (char)accessibilitySupportsAttentionAwareFeatures;
+ (char)deviceCanMakeEmergencyCall;
+ (char)isATV;
+ (char)isCommunal;
+ (char)isReality;

@end
