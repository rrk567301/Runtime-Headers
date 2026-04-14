@interface BRRuntimeBehavior : NSObject

+ (BOOL)isInternalBuild;
+ (BOOL)isSeedBuild;
+ (BOOL)isRunningInDaemonBundle;
+ (BOOL)isRunningOnIOS;
+ (BOOL)isRunningOnMacOS;

@end
