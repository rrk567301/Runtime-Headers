@class NSString, NSData, IDSLinkSelectorPrimarySecondary;

@interface IDSGLP2PLinkEngineHandle : NSObject <IDSGLLinkEngineProtocol> {
    void /* unknown type, empty encoding */ engine;
}

@property (nonatomic, copy) NSString *tag;
@property (nonatomic) BOOL allowOngoingTasks;
@property (nonatomic, retain) IDSLinkSelectorPrimarySecondary *idsPrimarySecondaryLinkSelector;

- (void)invalidate;
- (id)init;
- (void)scheduleUpdate;
- (void).cxx_destruct;
- (void)setTestableLink:(id)a0 forLinkWithUniqueID:(id)a1;
- (void)linkDidConnect:(id)a0;
- (id)addLinkForCandidatePair:(id)a0;
- (id)compactLinkQualityEvents;
- (void)didReceiveStatsTestPacketWithPayload:(NSData *)a0 linkName:(NSString *)a1 completionHandler:(void (^)(void))a2;
- (void)importQualityDelta:(id)a0 source:(id)a1;
- (id)initUsingLinkSelection:(BOOL)a0 recordingExpensiveQualityMetrics:(BOOL)a1 serverBag:(id)a2 timeFn:(id /* block */)a3;
- (BOOL)isLinkConnecting:(id)a0;
- (void)linkDidDisconnect:(id)a0;
- (void)linkDidFail:(id)a0 errorCode:(long long)a1 isRecoverable:(BOOL)a2 shouldReconnect:(BOOL)a3;
- (id)packetQualityHandlerForLinkWithUniqueName:(id)a0;
- (void)registerEngine;
- (void)removeAllLinks;
- (void)removeLinkWithUniqueName:(id)a0;
- (void)setIDSLinkID:(char)a0 forLinkWithUniqueID:(id)a1;
- (void)setRemoteRATForLink:(id)a0 rat:(unsigned int)a1;
- (void)unregisterEngine;

@end
