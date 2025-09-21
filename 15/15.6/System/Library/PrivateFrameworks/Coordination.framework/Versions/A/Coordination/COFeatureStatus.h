@interface COFeatureStatus : NSObject

+ (char)isNoDaemonMessageChannelEnabled;
+ (char)isCOClusterEnabled;
+ (char)isCoordinationEnabled;
+ (char)isDistributedTimersEnabled;
+ (char)isDistributedTimersForHH1Enabled;
+ (char)isFastFoldEnabled;
+ (char)isGlobalMessagingEnabled;
+ (char)isGlobalTimersEnabled;
+ (char)isHomeKitUsingAlarmsAndTimersIDSService;
+ (char)isIPDiscoveryDiffingEnabled;
+ (char)isOpalEnabled;
+ (char)isSharedCompanionLinkClientEnabled;
+ (char)isSlimBallotsEnabled;

@end
