@class NSString, FPXDomainContext, NSFileProviderRequest, NSObject, FPItemID;
@protocol OS_os_log, FPXEnumeratorObserver, NSFileProviderEnumerator, OS_dispatch_queue;

@interface FPXEnumerator : NSObject <FPXEnumerator> {
    FPXDomainContext *_domainContext;
    id<NSFileProviderEnumerator> _vendorEnumerator;
    NSFileProviderRequest *_nsFileProviderRequest;
    FPItemID *_observedItemID;
    char _invalidated;
    char _isWorkingSetEnum;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_os_log> *_log;
}

@property (readonly) id<FPXEnumeratorObserver> observer;
@property (readonly) FPItemID *observedItemID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_invalidate;
- (void)alternateContentsWereUpdatedAtURL:(id)a0 forItem:(id)a1;
- (void)currentSyncAnchorWithCompletion:(id /* block */)a0;
- (void)enumerateChangesFromToken:(id)a0 suggestedBatchSize:(long long)a1 reply:(id /* block */)a2;
- (void)enumerateItemsFromPage:(id)a0 suggestedPageSize:(long long)a1 reply:(id /* block */)a2;
- (void)enumerateItemsFromPage:(id)a0 suggestedPageSize:(long long)a1 upTo:(long long)a2 reply:(id /* block */)a3;
- (void)forceAddFileURLsForItems:(id)a0;
- (void)forceItemUpdate:(id)a0;
- (id)initWithObservedItemID:(id)a0 domainContext:(id)a1 vendorEnumerator:(id)a2 nsFileProviderRequest:(id)a3 observer:(id)a4 isWorkingSetEnum:(char)a5 queue:(id)a6;
- (void)invalidateVendorEnumeration;
- (void)keepAliveConnectionForRegisteredObserver:(id /* block */)a0;
- (id)vendorEnumerator;

@end
