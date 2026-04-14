@interface AMAppleScriptKitSoftLinking : NSObject

+ (BOOL)isLinked;
+ (void *)framework;
+ (void)softLink;
+ (Class)ASKScriptCache;
+ (Class)ASKDebuggerSupport;
+ (Class)ASKScript;
+ (Class)ASKNibObjectInfoManager;

@end
