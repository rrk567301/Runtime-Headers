@interface ULPlatform : NSObject

+ (id)deviceClass;
+ (BOOL)isInternalInstall;
+ (id)buildVersion;
+ (BOOL)isIphone;
+ (BOOL)isMac;
+ (BOOL)isIpad;
+ (BOOL)isMacBook;
+ (BOOL)isRunningInXCTestEnvironment;
+ (id)_mobileGestaltAnswerForQuestion:(struct __CFString { } *)a0;
+ (BOOL)isIpod;
+ (id)platformInfo;

@end
