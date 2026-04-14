@interface COFeatureStatus : NSObject

+ (BOOL)isCOClusterEnabled;
+ (BOOL)isCoordinationEnabled;
+ (BOOL)isGlobalMessagingEnabled;
+ (BOOL)isGlobalTimersEnabled;
+ (BOOL)isOdeonSyncEnabled;
+ (BOOL)isSharedCompanionLinkClientEnabled;
+ (BOOL)isSlimBallotsEnabled;

@end
