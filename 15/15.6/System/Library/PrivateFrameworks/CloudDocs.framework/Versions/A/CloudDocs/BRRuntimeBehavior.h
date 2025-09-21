@interface BRRuntimeBehavior : NSObject

+ (char)isInternalBuild;
+ (char)isRunningInDaemonBundle;
+ (char)isRunningOnIOS;
+ (char)isRunningOnMacOS;
+ (char)isSeedBuild;

@end
