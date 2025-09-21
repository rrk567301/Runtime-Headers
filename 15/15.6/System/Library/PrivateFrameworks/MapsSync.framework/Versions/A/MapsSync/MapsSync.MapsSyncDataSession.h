@class NSPersistentContainer, NSString, _TtC8MapsSync19MapsSyncDataSession;

@interface MapsSync.MapsSyncDataSession : NSObject {
    void /* unknown type, empty encoding */ _dataContainer;
    void /* unknown type, empty encoding */ _containerQueue;
    void /* unknown type, empty encoding */ _storeLoadInterval;
    void /* unknown type, empty encoding */ _readContext;
    void /* unknown type, empty encoding */ _backgroundReadContext;
    void /* unknown type, empty encoding */ _writeContext;
    void /* unknown type, empty encoding */ _localOnly;
    void /* unknown type, empty encoding */ _loadLock;
    void /* unknown type, empty encoding */ _hasLoadedStores;
    void /* unknown type, empty encoding */ _historyAnalyzer;
    void /* unknown type, empty encoding */ _loadHandlers;
    void /* unknown type, empty encoding */ _persistentContainer;
    void /* unknown type, empty encoding */ _lock;
    void /* unknown type, empty encoding */ _pendingReadContextFetches;
    void /* unknown type, empty encoding */ _pendingBackgroundReadContextFetches;
    void /* unknown type, empty encoding */ _pendingWriteContextFetches;
    void /* unknown type, empty encoding */ _contextFetchLock;
}

@property (class, nonatomic) char useInMemoryOnly;
@property (class, nonatomic, readonly) _TtC8MapsSync19MapsSyncDataSession *defaultSession;
@property (class, nonatomic, readonly) _TtC8MapsSync19MapsSyncDataSession *defaultLocalOnlySession;

@property (nonatomic, retain) NSPersistentContainer *persistentContainer;
@property (nonatomic, readonly) NSString *typeString;

+ (void)reset;
+ (void)enableNotifications;
+ (void)disableNotifications;
+ (void)suppressNotifications;
+ (void)resumeNotifications;
+ (char)isInMemoryOnly;
+ (void)resetWithCompletion:(id /* block */)a0;
+ (char)shouldMoveStoreAsideWithError:(id)a0;
+ (char)shouldRetryStoreLoadAfterErrorWithError:(id)a0;
+ (void)whenReadyWithCompletion:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (void)deleteAll;
- (void)checkStoreLoadedWithCompletion:(id /* block */)a0;
- (void)contextDidSaveWithNotification:(id)a0;
- (void)getBackgroundReadContextWithCompletion:(id /* block */)a0;
- (void)getReadContextWithCompletion:(id /* block */)a0;
- (void)getWriteContextWithCompletion:(id /* block */)a0;
- (char)hasLoadedStore;
- (id)initWithPersisted:(char)a0 deviceLocal:(char)a1;
- (void)loadCoreDataStoresFor:(id)a0 completion:(id /* block */)a1;
- (void)loadStoresWithCompletion:(id /* block */)a0;
- (void)remoteChangeWithNotification:(id)a0;
- (void)resetInMemoryStore;
- (void)resetInMemoryStoreWithCompletion:(id /* block */)a0;
- (id)unsafeGetBackgroundReadContextAndReturnError:(id *)a0;
- (id)unsafeGetReadContextAndReturnError:(id *)a0;
- (id)unsafeGetWriteContextAndReturnError:(id *)a0;
- (void)whenReadyWithCompletion:(id /* block */)a0;

@end
