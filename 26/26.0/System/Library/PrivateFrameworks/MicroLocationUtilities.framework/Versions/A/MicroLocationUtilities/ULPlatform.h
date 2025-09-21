@interface ULPlatform : NSObject

+ (id)buildVersion;
+ (id)deviceClass;
+ (BOOL)isIphone;
+ (BOOL)isMac;
+ (BOOL)isInternalInstall;
+ (BOOL)isIpad;
+ (BOOL)isMacBook;
+ (BOOL)isRunningInXCTestEnvironment;
+ (id)_mobileGestaltAnswerForQuestion:(struct __CFString { } *)a0;
+ (BOOL)isIpod;
+ (id)platformInfo;

@end
