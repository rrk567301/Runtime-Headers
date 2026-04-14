@interface FileProviderDaemon.LocalChangesObserverContext : NSObject <NSFileProviderChangeObserver> {
    void /* unknown type, empty encoding */ observer;
    void /* unknown type, empty encoding */ localFileEnumerator;
    void /* unknown type, empty encoding */ shouldUpdateFileIDInGenstore;
    void /* unknown type, empty encoding */ fsChangesEnumerator;
}

@property (nonatomic, readonly) long long suggestedBatchSize;

- (void)didDeleteItemsWithIdentifiers:(id)a0;
- (void)finishEnumeratingChangesUpToSyncAnchor:(id)a0 moreComing:(BOOL)a1;
- (void)didUpdateItems:(id)a0;
- (void)finishEnumeratingWithError:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
