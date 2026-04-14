@interface AMAppleScriptKitSoftLinking : NSObject

+ (BOOL)isLinked;
+ (void *)framework;
+ (void)softLink;
+ (Class)ASKScript;
+ (Class)ASKDebuggerSupport;
+ (Class)ASKScriptCache;
+ (Class)ASKNibObjectInfoManager;

@end
