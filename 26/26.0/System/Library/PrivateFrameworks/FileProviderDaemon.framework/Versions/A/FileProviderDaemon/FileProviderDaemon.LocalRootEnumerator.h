@class NSString;

@interface FileProviderDaemon.LocalRootEnumerator : NSObject <NSFileProviderEnumerator> {
    void /* unknown type, empty encoding */ rootID;
    void /* unknown type, empty encoding */ domain;
    void /* unknown type, empty encoding */ fileEnumerator;
    void /* unknown type, empty encoding */ containerSnapshot;
}

@property (nonatomic, readonly) NSString *description;

- (void)invalidate;
- (id)init;
- (void).cxx_destruct;
- (void)currentSyncAnchorWithCompletionHandler:(id /* block */)a0;
- (void)enumerateChangesForObserver:(id)a0 fromSyncAnchor:(id)a1;
- (void)enumerateItemsForObserver:(id)a0 startingAtPage:(id)a1;

@end
