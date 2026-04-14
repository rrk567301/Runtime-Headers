@interface BRRuntimeBehavior : NSObject

+ (BOOL)isInternalBuild;
+ (BOOL)isRunningOnIOS;
+ (BOOL)isRunningOnMacOS;
+ (BOOL)isSeedBuild;

@end
