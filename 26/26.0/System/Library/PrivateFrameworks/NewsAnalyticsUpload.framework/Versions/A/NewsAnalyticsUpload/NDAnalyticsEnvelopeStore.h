@class NSString, FCCacheCoordinator, FCAssetStore;
@protocol NDAnalyticsEnvelopeStoreObserver;

@interface NDAnalyticsEnvelopeStore : NSObject <FCCacheCoordinatorDelegate, NDAnalyticsEnvelopeStore>

@property (retain, nonatomic) FCAssetStore *assetStore;
@property (retain, nonatomic) FCCacheCoordinator *cacheCoordinator;
@property (weak, nonatomic) id<NDAnalyticsEnvelopeStoreObserver> observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_deleteEnvelopesForKeysFromStore:(id)a0;
- (id)envelopesForEntries:(id)a0;
- (id)init;
- (void)enableFlushing;
- (void)deleteEnvelopesForEntries:(id)a0;
- (id)sizesOfEnvelopesWithEntries:(id)a0;
- (void)cacheCoordinator:(id)a0 flushKeysWithWriteLock:(id)a1;
- (void)_reportEnvelopesToNewsAutomationIfNeeded:(id)a0;
- (id)initWithStoreDirectoryFileURL:(id)a0;
- (id)allEntriesWithHoldToken:(id *)a0;
- (void)copyEnvelopes:(id)a0;
- (unsigned long long)cacheCoordinatorCurrentSizeWithReadLock:(id)a0;
- (void).cxx_destruct;

@end
