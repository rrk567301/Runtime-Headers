@interface COFeatureStatus : NSObject

+ (BOOL)isGlobalMessagingEnabled;
+ (BOOL)isCoordinationEnabled;
+ (BOOL)isDistributedTimersEnabled;
+ (BOOL)isDistributedTimersForHH1Enabled;
+ (BOOL)isNoDaemonMessageChannelEnabled;
+ (BOOL)isCOClusterEnabled;
+ (BOOL)isIPDiscoveryDiffingEnabled;
+ (BOOL)isFastFoldEnabled;
+ (BOOL)isOpalEnabled;
+ (BOOL)isGlobalTimersEnabled;
+ (BOOL)isHomeKitUsingAlarmsAndTimersIDSService;
+ (BOOL)isSharedCompanionLinkClientEnabled;
+ (BOOL)isSlimBallotsEnabled;

@end
