@class IDSGFTMetricsLocalJoin, NSString, NSSet, NSMutableDictionary, IDSGFTMetricsAnonymizer, IDSGFTMetricsMembershipChange;

@interface IDSGFTMetricsCollector : NSObject {
    NSMutableDictionary *_referencePointsByType;
    NSMutableDictionary *_pushTokensByMKIs;
    NSMutableDictionary *_unknownMKMReceiptTimes;
    int _nextUniqueID;
    IDSGFTMetricsMembershipChange *_lastMembershipChange;
    NSMutableDictionary *_annotatorsByEventType;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unknownMKMFlushLock;
    IDSGFTMetricsAnonymizer *_anonymizer;
}

@property NSString *conversationID;
@property BOOL isInitiator;
@property (copy) NSSet *activeParticipantURIs;
@property (readonly) IDSGFTMetricsLocalJoin *localJoin;

- (id)init;
- (void).cxx_destruct;
- (id)request:(id)a0;
- (id)keyValueDelivery;
- (void)receivedKMOverQRFromToken:(id)a0;
- (void)receivedKMOverPushFromToken:(id)a0;
- (void)receivedKMOverPushViaCacheForToken:(id)a0;
- (void)receivedKMOverQUICFromToken:(id)a0;
- (id)localDidJoin;
- (void)willSendJoin;
- (void)didSendJoin;
- (void)sendAllocationRequest;
- (void)connectQRServer;
- (void)globalLinkStart;
- (void)willSendAllocbindRequest;
- (void)stunAllocbindRequest;
- (void)stunAllocbindResponse;
- (void)tcpAllocbindRequest;
- (void)tcpAllocbindResponse;
- (void)quicAllocbindRequest;
- (void)quicAllocbindResponse;
- (void)clientChannelConnected;
- (void)didConnectUnderlyingRelayLink;
- (void)didConnectUnderlyingE2ELink;
- (void)didCreateMKM:(id)a0;
- (void)sendMKMToAVC:(id)a0 isGeneratedLocally:(BOOL)a1;
- (void)firstIncomingPacketTime:(double)a0 forMKI:(id)a1;
- (void)firstOutgoingPacketTime:(double)a0 forMKI:(id)a1;
- (void)avcReceiveMKMTime:(double)a0 forMKI:(id)a1 isGeneratedLocally:(BOOL)a2;
- (id)collectForTimeBase:(double)a0 anonymize:(BOOL)a1;
- (id)begin:(id)a0 uniqueID:(id)a1;
- (id)begin:(id)a0 uniqueID:(id)a1 withClass:(Class)a2;
- (void)annotate:(id)a0 block:(id /* block */)a1;
- (void)annotate:(id)a0 withEvent:(id)a1;
- (void)flushPendingNowKnownMKMs;
- (id)joinCycleForToken:(id)a0;
- (id)error:(id)a0;
- (void)remoteDidJoin:(id)a0;
- (void)remoteDidBecomeActive:(id)a0;
- (void)receivedUnknownKMOverPushViaCache:(id)a0;
- (void)mapMKI:(id)a0 toPushToken:(id)a1;
- (void)membershipChange;
- (void)didMitigateCollision:(BOOL)a0;
- (void)transactionIDMismatchDetected;

@end
