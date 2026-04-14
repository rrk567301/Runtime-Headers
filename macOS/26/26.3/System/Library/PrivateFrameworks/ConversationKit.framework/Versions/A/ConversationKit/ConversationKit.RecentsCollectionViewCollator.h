@interface ConversationKit.RecentsCollectionViewCollator : NSObject <TUConversationManagerDelegate> {
    void /* unknown type, empty encoding */ updateQueue;
    void /* unknown type, empty encoding */ updateQueueKey;
    void /* unknown type, empty encoding */ recentsController;
    void /* unknown type, empty encoding */ conversationManager;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ linkController;
    void /* unknown type, empty encoding */ _hasFinishedFirstLoad;
    void /* unknown type, empty encoding */ sensitiveContentTipViewModel;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ isShowingRequestsTip;
    void /* unknown type, empty encoding */ shouldPresentRequestsTip;
    void /* unknown type, empty encoding */ shouldPresentRequestsTipOnResume;
    void /* unknown type, empty encoding */ signposter;
    void /* unknown type, empty encoding */ firstLoadSignpostID;
    void /* unknown type, empty encoding */ firstLoadState;
    void /* unknown type, empty encoding */ _activeApplies;
    void /* unknown type, empty encoding */ currentFilterBadgeCount;
    void /* unknown type, empty encoding */ currentRequestCount;
    void /* unknown type, empty encoding */ currentVoicemailCount;
    void /* unknown type, empty encoding */ currentVideomailCount;
    void /* unknown type, empty encoding */ recentCallsDidChangeObserver;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ $__lazy_storage_$_upcomingSectionItemLimit;
    void /* unknown type, empty encoding */ featureFlags;
    void /* unknown type, empty encoding */ suggestionFetcher;
    void /* unknown type, empty encoding */ wantsSynchronousLoad;
    void /* unknown type, empty encoding */ isDataLoading;
    void /* unknown type, empty encoding */ pendingDataLoading;
    void /* unknown type, empty encoding */ cachedJunkItems;
    void /* unknown type, empty encoding */ cachedRequestItems;
    void /* unknown type, empty encoding */ cachedMissedItems;
    void /* unknown type, empty encoding */ cachedVoicemailItems;
    void /* unknown type, empty encoding */ cachedVideomailItems;
    void /* unknown type, empty encoding */ cachedDefaultItems;
    void /* unknown type, empty encoding */ _requestCount;
    void /* unknown type, empty encoding */ _voicemailCount;
    void /* unknown type, empty encoding */ _videomailCount;
    void /* unknown type, empty encoding */ requestsHandler;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)conversationManager:(id)a0 stateChangedForConversation:(id)a1;
- (void)conversationManager:(id)a0 addedActiveConversation:(id)a1;
- (void)conversationManager:(id)a0 didChangeActivatedLinks:(id)a1;
- (void)conversationManager:(id)a0 linkChangedForConversation:(id)a1;
- (void)conversationManager:(id)a0 removedActiveConversation:(id)a1;

@end
