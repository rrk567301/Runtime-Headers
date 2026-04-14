@interface SKAPresentDevicesManager : NSObject <SKAPresentDevicesManaging> {
    void /* unknown type, empty encoding */ channelManager;
    void /* unknown type, empty encoding */ databaseManager;
    void /* unknown type, empty encoding */ messagingProvider;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ verifyPayloadTimeout;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleParticipantPayloads:(id)a0 forChannel:(id)a1 withUpdateType:(int)a2 resetState:(BOOL)a3;
- (void)activePresentDevicesForChannel:(id)a0 withCompletion:(id /* block */)a1;
- (void)clearPresentDevicesForChannel:(id)a0;
- (id)initWithChannelManager:(id)a0 databaseManager:(id)a1 messagingProvider:(id)a2 delegate:(id)a3;
- (void)setParticipantPayloads:(id)a0 forChannel:(id)a1;
- (void)setParticipantPayloads:(id)a0 forChannel:(id)a1 withCompletion:(id /* block */)a2;

@end
