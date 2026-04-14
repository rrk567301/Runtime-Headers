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

+ (id)entryEventPointDefinitionIDSLinkPreferenceRequest;
+ (id)entryEventPointDefinitionIDSIncomingPushReceived;
+ (id)entryEventPointDefinitionIDSLocalMessage;
+ (void)load;
+ (id)entryDefinitionLocalLink;
+ (id)entryDefinitionLocalInfraWiFiRequests;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventPointDefinitionIDSOutgoingPushSent;
+ (id)entryDefinitionIDSSocketStats;
+ (id)entryDefinitionIDSMessageStats;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryDefinitionCloudMessaging;
+ (id)entryDefinitionSession;

- (void)initOperatorDependancies;
- (void)logIDSIncomingPushReceived:(id)a0;
- (void)logCloudMessaging:(id)a0;
- (void)logLocalInfraWiFiFrequests:(id)a0;
- (void)notifyLinkType:(unsigned long long)a0;
- (void)logLocalLinkType:(unsigned long long)a0;
- (void)logIDSSession:(id)a0;
- (void)logLocalMessageTopic:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)logIDSOutgoingPushSent:(id)a0;
- (void)logIDSNetworkEntries:(id)a0;
- (void)initTaskOperatorDependancies;

@end
