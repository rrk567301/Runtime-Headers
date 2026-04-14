@interface FaceTimeMessageStore.HistoryCoalescingManager : _TtCs12_SwiftObject <_FTMSMessageStoreControllerDelegate> {
    void /* unknown type, empty encoding */ callHistoryManager;
    void /* unknown type, empty encoding */ messageStoreController;
    void /* unknown type, empty encoding */ contactStore;
    void /* unknown type, empty encoding */ keyDescriptors;
    void /* unknown type, empty encoding */ messageRequest;
    void /* unknown type, empty encoding */ callRequest;
    void /* unknown type, empty encoding */ pageSize;
    void /* unknown type, empty encoding */ callHistoryObserver;
    void /* unknown type, empty encoding */ handleToPerson;
    void /* unknown type, empty encoding */ buckets;
    void /* unknown type, empty encoding */ messageFetchTask;
    void /* unknown type, empty encoding */ callFetchTask;
    void /* unknown type, empty encoding */ pendingMessageRefetch;
    void /* unknown type, empty encoding */ pendingCallRefetch;
    void /* unknown type, empty encoding */ resultStream;
    void /* unknown type, empty encoding */ eventVersion;
    void /* unknown type, empty encoding */ eventLog;
    void /* unknown type, empty encoding */ maxEventLogCount;
    void /* unknown type, empty encoding */ initialFetch;
    void /* unknown type, empty encoding */ didEmitFinishedInitialFetch;
}

- (void)messageStoreDidAddMessages:(id)a0;
- (void)messageStoreDidDeleteMessages:(id)a0;
- (void)messageStoreDidDeleteMessagesWithUUIDs:(id)a0;
- (void)messageStoreDidReconnect;
- (void)messageStoreDidUpdateMessages:(id)a0;
- (void)messageStoreRequiresRefetch;

@end
