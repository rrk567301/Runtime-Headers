@interface COFeatureStatus : NSObject

+ (BOOL)isDistributedTimersEnabled;
+ (BOOL)isSharedCompanionLinkClientEnabled;
+ (BOOL)isCoordinationEnabled;
+ (BOOL)isSlimBallotsEnabled;
+ (BOOL)isFastFoldEnabled;
+ (BOOL)isDistributedTimersForHH1Enabled;
+ (BOOL)isHomeKitUsingAlarmsAndTimersIDSService;
+ (BOOL)isGlobalTimersEnabled;
+ (BOOL)isIPDiscoveryDiffingEnabled;
+ (BOOL)isOpalEnabled;
+ (BOOL)isGlobalMessagingEnabled;
+ (BOOL)isNoDaemonMessageChannelEnabled;
+ (BOOL)isCOClusterEnabled;

@end
