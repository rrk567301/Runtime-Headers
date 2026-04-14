@interface COFeatureStatus : NSObject

+ (BOOL)isHomeKitUsingAlarmsAndTimersIDSService;
+ (BOOL)isGlobalMessagingEnabled;
+ (BOOL)isGlobalTimersEnabled;
+ (BOOL)isSharedCompanionLinkClientEnabled;
+ (BOOL)isOpalEnabled;
+ (BOOL)isFastFoldEnabled;
+ (BOOL)isDistributedTimersEnabled;
+ (BOOL)isCOClusterEnabled;
+ (BOOL)isCoordinationEnabled;
+ (BOOL)isNoDaemonMessageChannelEnabled;
+ (BOOL)isSlimBallotsEnabled;
+ (BOOL)isDistributedTimersForHH1Enabled;
+ (BOOL)isIPDiscoveryDiffingEnabled;

@end
