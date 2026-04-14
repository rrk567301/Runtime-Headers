@interface COFeatureStatus : NSObject

+ (BOOL)isNoDaemonMessageChannelEnabled;
+ (BOOL)isHomeKitUsingAlarmsAndTimersIDSService;
+ (BOOL)isCoordinationEnabled;
+ (BOOL)isSlimBallotsEnabled;
+ (BOOL)isDistributedTimersForHH1Enabled;
+ (BOOL)isIPDiscoveryDiffingEnabled;
+ (BOOL)isCOClusterEnabled;
+ (BOOL)isSharedCompanionLinkClientEnabled;
+ (BOOL)isOpalEnabled;
+ (BOOL)isGlobalTimersEnabled;
+ (BOOL)isDistributedTimersEnabled;
+ (BOOL)isGlobalMessagingEnabled;
+ (BOOL)isFastFoldEnabled;

@end
