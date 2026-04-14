@interface ULPlatform : NSObject

+ (id)deviceClass;
+ (id)buildVersion;
+ (BOOL)isMac;
+ (BOOL)isIphone;
+ (BOOL)isInternalInstall;
+ (BOOL)isIpad;
+ (BOOL)isMacBook;
+ (BOOL)supportsExclave;
+ (BOOL)isRunningInXCTestEnvironment;
+ (id)_mobileGestaltAnswerForQuestion:(struct __CFString { } *)a0;
+ (BOOL)isIpod;
+ (id)platformInfo;

@end
