@interface IRPlatformInfo : NSObject

+ (char)isInternalInstall;
+ (char)isSupportedPlatform;
+ (char)isTVOS;
+ (char)isIOS;
+ (char)isRunningInUnitTesting;

@end
