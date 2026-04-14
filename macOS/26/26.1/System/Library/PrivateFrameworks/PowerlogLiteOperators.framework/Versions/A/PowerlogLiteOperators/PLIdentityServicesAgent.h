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
+ (id)entryDefinitionIDSMessageStats;
+ (id)entryEventPointDefinitionIDSOutgoingPushSent;
+ (id)entryDefinitionLocalInfraWiFiRequests;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitionIDSLinkPreferenceRequest;
+ (id)entryDefinitionCloudMessaging;
+ (id)entryDefinitionLocalLink;
+ (id)entryEventIntervalDefinitions;
+ (id)entryDefinitionIDSSocketStats;
+ (id)entryEventPointDefinitionIDSIncomingPushReceived;
+ (id)entryDefinitionSession;
+ (id)entryEventPointDefinitionIDSLocalMessage;

- (void)initOperatorDependancies;
- (void)logLocalMessageTopic:(id)a0;
- (void)logIDSNetworkEntries:(id)a0;
- (void)initTaskOperatorDependancies;
- (void)notifyLinkType:(unsigned long long)a0;
- (void)logLocalInfraWiFiFrequests:(id)a0;
- (void)logCloudMessaging:(id)a0;
- (void).cxx_destruct;
- (void)logIDSSession:(id)a0;
- (void)logLocalLinkType:(unsigned long long)a0;
- (void)logIDSOutgoingPushSent:(id)a0;
- (void)logIDSIncomingPushReceived:(id)a0;
- (id)init;

@end
