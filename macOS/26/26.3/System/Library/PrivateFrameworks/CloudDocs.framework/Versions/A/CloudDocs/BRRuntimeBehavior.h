@interface BRRuntimeBehavior : NSObject

+ (BOOL)isSeedBuild;
+ (BOOL)isInternalBuild;
+ (BOOL)isRunningInDaemonBundle;
+ (BOOL)isRunningOnIOS;
+ (BOOL)isRunningOnMacOS;

@end
