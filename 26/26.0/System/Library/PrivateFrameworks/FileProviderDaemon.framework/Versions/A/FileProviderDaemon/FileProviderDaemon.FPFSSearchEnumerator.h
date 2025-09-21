@class NSString;

@interface FileProviderDaemon.FPFSSearchEnumerator : NSObject <FPXEnumerator> {
    void /* unknown type, empty encoding */ observer;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ backend;
    void /* unknown type, empty encoding */ extensionEnumerator;
    void /* unknown type, empty encoding */ lifetimeExtender;
    void /* unknown type, empty encoding */ keepAlive;
    void /* unknown type, empty encoding */ invalidated;
    void /* unknown type, empty encoding */ searchIdentifier;
    void /* unknown type, empty encoding */ changedItemsByID;
    void /* unknown type, empty encoding */ deletedItemsIDs;
}

@property (nonatomic, readonly) NSString *description;

- (void)currentSyncAnchorWithCompletion:(id /* block */)a0;
- (void)keepAliveConnectionForRegisteredObserver:(id /* block */)a0;
- (void)dealloc;
- (void)invalidate;
- (id)init;
- (void)enumerateItemsFromPage:(id)a0 suggestedPageSize:(long long)a1 reply:(id /* block */)a2;
- (void)enumerateChangesFromToken:(id)a0 suggestedBatchSize:(long long)a1 reply:(id /* block */)a2;
- (void)enumerateItemsFromPage:(id)a0 suggestedPageSize:(long long)a1 upTo:(long long)a2 reply:(id /* block */)a3;
- (void).cxx_destruct;

@end
