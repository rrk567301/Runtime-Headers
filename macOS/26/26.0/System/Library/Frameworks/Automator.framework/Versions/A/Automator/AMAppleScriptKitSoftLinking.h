@interface AMAppleScriptKitSoftLinking : NSObject

+ (void *)framework;
+ (BOOL)isLinked;
+ (Class)ASKDebuggerSupport;
+ (Class)ASKScript;
+ (Class)ASKNibObjectInfoManager;
+ (Class)ASKScriptCache;
+ (void)softLink;

@end
