@interface FaceTimeMessageStore.MessageStoreService : _TtCs12_SwiftObject <_FTMSMessageStoreControllerClientDelegate> {
    void /* unknown type, empty encoding */ xpcHost;
    void /* unknown type, empty encoding */ server;
}

- (void)messageStoreAccountInfoDidChange:(id)a0;
- (void)messageStoreDidAddMessages:(id)a0;
- (void)messageStoreDidDeleteMessages:(id)a0;
- (void)messageStoreDidDeleteMessagesWithUUIDs:(id)a0;
- (void)messageStoreDidReconnect;
- (void)messageStoreDidUpdateMessages:(id)a0;
- (void)messageStoreRequiresRefetch;

@end
