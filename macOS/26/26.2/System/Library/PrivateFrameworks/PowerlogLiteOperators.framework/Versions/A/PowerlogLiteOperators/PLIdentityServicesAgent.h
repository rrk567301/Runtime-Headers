@class PLXPCListenerOperatorComposition, NSMutableDictionary, NSDate;

@interface PLIdentityServicesAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *localMessageHandler;
@property (retain) PLXPCListenerOperatorComposition *networkStatsHandler;
@property (retain) PLXPCListenerOperatorComposition *infraWiFiRequestHandler;
@property (retain) PLXPCListenerOperatorComposition *localLinkTypeHandler;
@property (retain) PLXPCListenerOperatorComposition *ipsecLinkTypeHandler;
@property (retain) PLXPCListenerOperatorComposition *cloudMessagingHandler;
@property (retain) PLXPCListenerOperatorComposition *idsLinkPreferenceRequestHandler;
@property (retain) PLXPCListenerOperatorComposition *idsOutgoingPushSentListener;
@property (retain) PLXPCListenerOperatorComposition *idsIncomingPushReceivedListener;
@property (retain) PLXPCListenerOperatorComposition *idsSessionListener;
@property (retain) NSMutableDictionary *previousStatsByPriority;
@property (retain) NSDate *initialEntryDate;
@property (retain) NSDate *lastLocalDeliveryLogDate;
@property (retain) NSMutableDictionary *lastEntryDatePerCategory;

+ (id)entryEventIntervalDefinitions;
+ (id)entryEventForwardDefinitions;
+ (void)load;
+ (id)entryEventPointDefinitions;
+ (id)entryDefinitionIDSMessageStats;
+ (id)entryEventPointDefinitionIDSLocalMessage;
+ (id)entryDefinitionLocalInfraWiFiRequests;
+ (id)entryEventPointDefinitionIDSOutgoingPushSent;
+ (id)entryDefinitionSession;
+ (id)entryEventPointDefinitionIDSLinkPreferenceRequest;
+ (id)entryDefinitionLocalLink;
+ (id)entryEventPointDefinitionIDSIncomingPushReceived;
+ (id)entryDefinitionIDSSocketStats;
+ (id)entryDefinitionCloudMessaging;

- (void)initTaskOperatorDependancies;
- (void)initOperatorDependancies;
- (void)logLocalMessageTopic:(id)a0;
- (void)logIDSOutgoingPushSent:(id)a0;
- (void)logLocalInfraWiFiFrequests:(id)a0;
- (void)logLocalLinkType:(unsigned long long)a0;
- (void)logIDSSession:(id)a0;
- (void).cxx_destruct;
- (void)logCloudMessaging:(id)a0;
- (void)logIDSIncomingPushReceived:(id)a0;
- (id)init;
- (void)notifyLinkType:(unsigned long long)a0;
- (void)logIDSNetworkEntries:(id)a0;

@end
