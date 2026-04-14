@interface ULPlatform : NSObject

+ (id)deviceClass;
+ (id)buildVersion;
+ (BOOL)isIpad;
+ (BOOL)isInternalInstall;
+ (BOOL)isIphone;
+ (BOOL)isMac;
+ (BOOL)isMacBook;
+ (BOOL)isRunningInXCTestEnvironment;
+ (id)_mobileGestaltAnswerForQuestion:(struct __CFString { } *)a0;
+ (BOOL)isIpod;
+ (id)platformInfo;

@end
