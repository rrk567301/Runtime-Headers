@interface SKAPresentDevicesManager : NSObject <SKAPresentDevicesManaging> {
    void /* unknown type, empty encoding */ channelManager;
    void /* unknown type, empty encoding */ databaseManager;
    void /* unknown type, empty encoding */ messagingProvider;
    void /* unknown type, empty encoding */ serverBag;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ lastKnownSequenceNumberPrefsKey;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ verifyPayloadTimeout;
}

- (void).cxx_destruct;
- (id)init;
- (void)activePersistentDevicesForChannel:(id)a0 withCompletion:(id /* block */)a1;
- (void)activePresentDevicesForChannel:(id)a0 withCompletion:(id /* block */)a1;
- (void)clearPresentDevicesForChannel:(id)a0;
- (void)handleParticipantPayloads:(id)a0 withParticipantUpdateType:(int)a1 persistentPayloadUpdates:(id)a2 forChannel:(id)a3 resetState:(BOOL)a4;
- (id)initWithChannelManager:(id)a0 databaseManager:(id)a1 messagingProvider:(id)a2 serverBag:(id)a3 delegate:(id)a4;
- (void)isSelfDevicePresentForChannel:(id)a0 withCompletion:(id /* block */)a1;
- (void)setParticipantPayloads:(id)a0 forChannel:(id)a1;
- (void)setParticipantPayloads:(id)a0 forChannel:(id)a1 withCompletion:(id /* block */)a2;
- (void)setParticipantPayloads:(id)a0 persistentPayloads:(id)a1 forChannel:(id)a2;
- (void)setParticipantPayloads:(id)a0 persistentPayloads:(id)a1 forChannel:(id)a2 withCompletion:(id /* block */)a3;

@end
