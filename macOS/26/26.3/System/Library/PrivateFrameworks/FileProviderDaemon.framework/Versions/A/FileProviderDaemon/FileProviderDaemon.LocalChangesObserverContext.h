@interface FileProviderDaemon.LocalChangesObserverContext : NSObject <NSFileProviderChangeObserver> {
    void /* unknown type, empty encoding */ observer;
    void /* unknown type, empty encoding */ localFileEnumerator;
    void /* unknown type, empty encoding */ shouldUpdateFileIDInGenstore;
    void /* unknown type, empty encoding */ fsChangesEnumerator;
}

@property (nonatomic, readonly) long long suggestedBatchSize;

- (void)didDeleteItemsWithIdentifiers:(id)a0;
- (void)finishEnumeratingWithError:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)finishEnumeratingChangesUpToSyncAnchor:(id)a0 moreComing:(BOOL)a1;
- (void)didUpdateItems:(id)a0;

@end
