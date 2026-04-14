@class NSMutableDictionary, NSString, NSTimer, CKStoreClient, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface CKStoreDAAPLibrary : NSObject <CKAccountObserver>

@property (retain) NSNumber *localVersion;
@property (retain) NSMutableDictionary *items;
@property (retain) NSString *serviceName;
@property (retain) NSNumber *sessionID;
@property (retain) NSObject<OS_dispatch_queue> *requestQueue;
@property double pollFrequency;
@property double forcedRefreshFrequency;
@property (retain) NSTimer *pollTimer;
@property (retain) NSTimer *forcedRefreshTimer;
@property (retain) NSMutableDictionary *observers;
@property (readonly) CKStoreClient *storeClient;
@property long long mediaKinds;
@property (readonly) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)daapLibraryWithStoreClient:(id)a0;

- (void)dealloc;
- (id)itemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)update;
- (id)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)reload;
- (id)allItems;
- (id)initWithStoreClient:(id)a0;
- (void)accountStore:(id)a0 primaryAccountChanged:(id)a1;
- (void)_loadPersistedStore;
- (id)_persistedStoreURL;
- (void)_performDAAPRequestWithAction:(id)a0 body:(id)a1 contentType:(id)a2 reason:(int)a3 completionHandler:(id /* block */)a4;
- (void)_pollDAAPServerWithReason:(int)a0 completionHandler:(id /* block */)a1;
- (id)_mediaKindsQueryString;
- (id)daapClientTokenPairs;
- (void)_updatedItems:(id)a0 deletedItems:(id)a1 withLatestVersion:(id)a2;
- (void)_latestDatabaseVersionWithReason:(int)a0 completionHandler:(id /* block */)a1;
- (void)_loginWithCompletionHandler:(id /* block */)a0;
- (void)_writePersistedStoreItems:(id)a0 mediaKind:(long long)a1 version:(id)a2;
- (void)_configureWithBagInfo:(id)a0;
- (void)_pollingTimerFired:(id)a0;
- (void)_forcedRefreshTimerFired:(id)a0;
- (id)itemsAtIndexes:(id)a0;
- (id)sortedItemsUsingDescriptors:(id)a0;
- (id)filteredItemsUsingPredicate:(id)a0;

@end
