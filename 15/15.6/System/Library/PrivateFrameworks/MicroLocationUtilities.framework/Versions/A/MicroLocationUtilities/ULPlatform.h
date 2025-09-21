@interface ULPlatform : NSObject

+ (char)isInternalInstall;
+ (id)buildVersion;
+ (char)isMac;
+ (char)isIpad;
+ (char)isIphone;
+ (char)isMacBook;
+ (char)isLimitedMiloUsagePlatform;
+ (char)isRunningInXCTestEnvironment;
+ (id)platformInfo;
+ (id)_mobileGestaltAnswerForQuestion:(struct __CFString { } *)a0;
+ (char)isIpod;

@end
