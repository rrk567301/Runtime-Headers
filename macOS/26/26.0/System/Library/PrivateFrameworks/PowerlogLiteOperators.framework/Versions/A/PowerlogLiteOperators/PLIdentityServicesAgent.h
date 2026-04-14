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

+ (void)load;
+ (id)entryDefinitionLocalInfraWiFiRequests;
+ (id)entryDefinitionIDSMessageStats;
+ (id)entryEventPointDefinitionIDSLocalMessage;
+ (id)entryEventIntervalDefinitions;
+ (id)entryDefinitionLocalLink;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitionIDSIncomingPushReceived;
+ (id)entryDefinitionCloudMessaging;
+ (id)entryDefinitionIDSSocketStats;
+ (id)entryDefinitionSession;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionIDSOutgoingPushSent;
+ (id)entryEventPointDefinitionIDSLinkPreferenceRequest;

- (void)initOperatorDependancies;
- (void)logLocalInfraWiFiFrequests:(id)a0;
- (void)logIDSOutgoingPushSent:(id)a0;
- (void)logLocalMessageTopic:(id)a0;
- (void)logIDSSession:(id)a0;
- (void)logCloudMessaging:(id)a0;
- (void)logIDSIncomingPushReceived:(id)a0;
- (void)initTaskOperatorDependancies;
- (id)init;
- (void)logLocalLinkType:(unsigned long long)a0;
- (void)logIDSNetworkEntries:(id)a0;
- (void)notifyLinkType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
