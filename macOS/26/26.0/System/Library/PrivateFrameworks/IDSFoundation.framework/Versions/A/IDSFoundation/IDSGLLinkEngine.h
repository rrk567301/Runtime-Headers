@class IDSLinkSelectorPrimarySecondary, NSString, IDSRelayLinkProvider, NSData;

@interface IDSGLLinkEngine : NSObject <IDSGLLinkEngineProtocol> {
    void /* unknown type, empty encoding */ linkEngine;
}

@property (nonatomic, readonly) IDSRelayLinkProvider *relayLinkProvider;
@property (nonatomic) long long relayConnectionBehavior;
@property (nonatomic) BOOL allowOngoingTasks;
@property (nonatomic) BOOL isQUICAndH2Enabled;
@property (nonatomic) BOOL isH2Enabled;
@property (nonatomic, copy) NSString *tag;
@property (nonatomic, copy) NSString *idsSessionID;
@property (nonatomic, copy) NSString *qrSessionID;
@property (nonatomic, readonly) long long allocateType;
@property (nonatomic) BOOL shouldPreferIPv6;
@property (nonatomic) BOOL shouldFallbackToTCPFirst;
@property (nonatomic, readonly) IDSLinkSelectorPrimarySecondary *idsPrimarySecondaryLinkSelector;

- (void)invalidate;
- (id)init;
- (void)scheduleUpdate;
- (void).cxx_destruct;
- (void)setTestableLink:(id)a0 forLinkWithUniqueID:(id)a1;
- (void)linkDidConnect:(id)a0;
- (id)addLinkForCandidatePair:(id)a0;
- (void)addRemotePushToken:(id)a0;
- (void)addTwoWayAllocation:(id)a0 hasAffinityToCell:(BOOL)a1 resolvedCandidates:(id)a2;
- (id)compactLinkQualityEvents;
- (void)didReceiveStatsTestPacketWithPayload:(NSData *)a0 linkName:(NSString *)a1 completionHandler:(void (^)(void))a2;
- (void)importQualityDelta:(id)a0 source:(id)a1;
- (id)initWithLinkConnector:(id)a0 allocateType:(long long)a1 isInitiator:(BOOL)a2 useLinkSelection:(BOOL)a3 recordExpensiveQualityMetrics:(BOOL)a4 linkSelectionStrategy:(id)a5 serverBag:(id)a6 timeFn:(id /* block */)a7;
- (BOOL)isLinkConnecting:(id)a0;
- (void)linkDidDisconnect:(id)a0;
- (void)linkDidFail:(id)a0 errorCode:(long long)a1 isRecoverable:(BOOL)a2 shouldReconnect:(BOOL)a3;
- (id)packetQualityHandlerForLinkWithUniqueName:(id)a0;
- (void)registerEngine;
- (void)setAvailableInterfaceTypesWithLocalTypes:(int)a0 remoteTypes:(int)a1;
- (void)setIDSLinkID:(char)a0 forLinkWithUniqueID:(id)a1;
- (void)setRemoteRATForLink:(id)a0 rat:(unsigned int)a1;
- (void)unregisterEngine;

@end
