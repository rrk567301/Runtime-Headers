@class NSString, NSURL, WBSLPLinkMetadataSQLiteStore, WBSOnDiskDataCache, NSObject;
@protocol OS_dispatch_queue;

@interface WBSLPLinkMetadataCache : NSObject <WBSDataCacheDelegate, WBSSQLiteStoreDelegate> {
    WBSOnDiskDataCache *_metadataDiskCache;
    WBSLPLinkMetadataSQLiteStore *_metadataDatabase;
    NSObject<OS_dispatch_queue> *_internalQueue;
    id /* block */ _setUpCompletionHandler;
    long long _cacheState;
}

@property (readonly, copy, nonatomic) NSURL *databaseURL;
@property (readonly, copy, nonatomic) NSURL *diskCacheURL;
@property (readonly, nonatomic) BOOL evictionEnabled;
@property (readonly, nonatomic) unsigned long long maximumNumberOfEntries;
@property (readonly, nonatomic) double expirationInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)openWithCompletionHandler:(id /* block */)a0;
- (void)savePendingChangesBeforeTermination;
- (void)sqliteStoreDidFailDatabaseIntegrityCheck:(id)a0 completionHandler:(id /* block */)a1;
- (void)sqliteStoreDidFallBackToInMemoryStore:(id)a0;
- (void)dataCacheDidSetUp:(id)a0;
- (void)_didFailDiskCacheWriteForUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)_didFinishDiskCacheWriteWithCompletionHandler:(id /* block */)a0;
- (void)_didRetrieveEntryURL:(id)a0 forMetadataInfo:(id)a1 completionHandler:(id /* block */)a2;
- (void)_evictCacheItemsIfNecessaryWithCompletionHandler:(id /* block */)a0;
- (void)_finishSetUpWithStatus:(long long)a0;
- (long long)_internalStatusFromWBSSQLStoreStatus:(long long)a0;
- (BOOL)_isMetadataExpired:(id)a0;
- (void)closeAfterPendingChangesWithCompletionHandler:(id /* block */)a0;
- (id)initWithCacheDirectoryURL:(id)a0 expirationInterval:(double)a1;
- (id)initWithCacheDirectoryURL:(id)a0 expirationInterval:(double)a1 maximumNumberOfEntries:(unsigned long long)a2;
- (void)metadataForURLString:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeAllMetadataWithCompletionHandler:(id /* block */)a0;
- (void)removeMetadataWithURLString:(id)a0 completionHandler:(id /* block */)a1;
- (void)reuseMetadataOfURLString:(id)a0 forURLString:(id)a1 completionHandler:(id /* block */)a2;
- (void)setMetadata:(id)a0 forURLString:(id)a1 completionHandler:(id /* block */)a2;

@end
