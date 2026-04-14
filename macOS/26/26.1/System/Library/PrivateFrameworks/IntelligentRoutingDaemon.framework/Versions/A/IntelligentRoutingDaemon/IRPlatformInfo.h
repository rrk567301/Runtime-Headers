@interface IRPlatformInfo : NSObject

+ (BOOL)isTVOS;
+ (BOOL)isInternalInstall;
+ (BOOL)isIOS;
+ (BOOL)isSupportedPlatform;
+ (BOOL)isRunningInUnitTesting;

@end
