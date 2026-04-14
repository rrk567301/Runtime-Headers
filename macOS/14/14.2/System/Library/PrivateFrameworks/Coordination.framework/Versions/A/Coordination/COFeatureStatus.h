@interface COFeatureStatus : NSObject

+ (BOOL)isCOClusterEnabled;
+ (BOOL)isCoordinationEnabled;
+ (BOOL)isFastFoldEnabled;
+ (BOOL)isGlobalMessagingEnabled;
+ (BOOL)isGlobalTimersEnabled;
+ (BOOL)isIPDiscoveryDiffingEnabled;
+ (BOOL)isOdeonSyncEnabled;
+ (BOOL)isOpalEnabled;
+ (BOOL)isSharedCompanionLinkClientEnabled;
+ (BOOL)isSlimBallotsEnabled;

@end
