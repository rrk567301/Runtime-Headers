@interface COFeatureStatus : NSObject

+ (BOOL)isIPDiscoveryDiffingEnabled;
+ (BOOL)isHomeKitUsingAlarmsAndTimersIDSService;
+ (BOOL)isOpalEnabled;
+ (BOOL)isGlobalTimersEnabled;
+ (BOOL)isSlimBallotsEnabled;
+ (BOOL)isNoDaemonMessageChannelEnabled;
+ (BOOL)isDistributedTimersEnabled;
+ (BOOL)isGlobalMessagingEnabled;
+ (BOOL)isSharedCompanionLinkClientEnabled;
+ (BOOL)isCOClusterEnabled;
+ (BOOL)isFastFoldEnabled;
+ (BOOL)isDistributedTimersForHH1Enabled;
+ (BOOL)isCoordinationEnabled;

@end
