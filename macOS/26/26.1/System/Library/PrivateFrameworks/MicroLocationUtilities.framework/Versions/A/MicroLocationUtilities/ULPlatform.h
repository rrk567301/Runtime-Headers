@interface ULPlatform : NSObject

+ (BOOL)isIpad;
+ (id)deviceClass;
+ (BOOL)isMac;
+ (id)buildVersion;
+ (BOOL)isInternalInstall;
+ (BOOL)isIphone;
+ (BOOL)isMacBook;
+ (BOOL)isRunningInXCTestEnvironment;
+ (id)_mobileGestaltAnswerForQuestion:(struct __CFString { } *)a0;
+ (BOOL)isIpod;
+ (id)platformInfo;

@end
