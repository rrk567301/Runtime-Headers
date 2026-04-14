@interface IRPlatformInfo : NSObject

+ (BOOL)isInternalInstall;
+ (BOOL)isIOS;
+ (BOOL)isTVOS;
+ (BOOL)isSupportedPlatform;
+ (BOOL)isRunningInUnitTesting;

@end
