@interface CallIntelligence.VoicemailClient : _TtCs12_SwiftObject <_FTMSMessageStoreControllerDelegate> {
    void /* unknown type, empty encoding */ messageStoreController;
    void /* unknown type, empty encoding */ smartActionsServer;
}

- (void)messageStoreDidAddMessages:(id)a0;
- (void)messageStoreDidDeleteMessages:(id)a0;
- (void)messageStoreDidDeleteMessagesWithUUIDs:(id)a0;
- (void)messageStoreDidUpdateMessages:(id)a0;

@end
