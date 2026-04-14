@class BMAccessClient, BMStoreSource, NSString, BMStreamDatastorePruner, BMStorePublisherManager, BMBFSPruningDelegate, BMStoreConfig, BMFileManager, BMStoreValidator;

@interface BMStoreStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream, BMSyncableStream, BMSharedSyncableStream> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BMStorePublisherManager *_publisherManager;
    NSString *_streamIdentifier;
    BMStoreConfig *_storeConfig;
    BMStoreSource *_source;
    BMStoreValidator *_validator;
    BMStreamDatastorePruner *_pruner;
    BMStreamDatastorePruner *_tombstonePruner;
    unsigned long long _streamType;
    BMAccessClient *_accessClient;
    BMFileManager *_fileManager;
    Class _eventDataClass;
    BMBFSPruningDelegate *_bfsPruningDelegate;
}

@property (readonly, nonatomic) NSString *useCase;
@property (readonly, nonatomic) NSString *identifier;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)source;
- (id)initWithPrivateStreamIdentifier:(id)a0 storeConfig:(id)a1 eventDataClass:(Class)a2;
- (BOOL)pruneEventsWithError:(id *)a0 predicateBlock:(id /* block */)a1;
- (void)pruneWithPredicateBlock:(id /* block */)a0;
- (id)publisher;
- (id)publisherFromStartTime:(double)a0;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 lastN:(id)a3 reversed:(BOOL)a4;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 reversed:(BOOL)a3;
- (id)validator;
- (id)remoteDevices;
- (id)initWithPrivateStreamIdentifier:(id)a0 storeConfig:(id)a1;
- (id)pruner;
- (id)initWithPublicStream:(long long)a0;
- (void)pruneExpiredEventsWithBlock:(id /* block */)a0;
- (id)publishersForRemoteDevices:(id)a0 startTime:(double)a1 includeLocal:(BOOL)a2 pipeline:(id /* block */)a3;
- (id)sourceWithUser:(unsigned int)a0;
- (id)tombstoneConfig;
- (id)tombstonePruner;
- (id)_bfsPruningDelegate;
- (id)_computeSource;
- (void)_pruneWithStoreConfig:(id)a0 expirationAge:(double)a1 block:(id /* block */)a2;
- (BOOL)_requestReadOnlyAccess;
- (BOOL)_requestReadWriteAccess;
- (BOOL)_requestWriteOnlyAccess;
- (id)accountsWithError:(id *)a0;
- (id)bfsPruningDelegate;
- (BOOL)deleteStoreEvent:(id)a0;
- (id)initWithPreMigrationPublicStream:(long long)a0;
- (id)initWithPublicStream:(long long)a0 protectionClass:(unsigned long long)a1;
- (id)initWithPublicStream:(long long)a0 protectionClass:(unsigned long long)a1 eventDataClass:(Class)a2;
- (id)initWithPublicStream:(long long)a0 storeConfig:(id)a1;
- (id)initWithRestrictedStreamIdentifier:(id)a0;
- (id)initWithRestrictedStreamIdentifier:(id)a0 protectionClass:(unsigned long long)a1;
- (id)initWithRestrictedStreamIdentifier:(id)a0 storeConfig:(id)a1;
- (id)initWithRestrictedStreamIdentifier:(id)a0 storeConfig:(id)a1 eventDataClass:(Class)a2;
- (id)initWithStreamIdentifier:(id)a0 storeConfig:(id)a1;
- (id)initWithStreamIdentifier:(id)a0 storeConfig:(id)a1 streamType:(unsigned long long)a2;
- (id)initWithStreamIdentifier:(id)a0 storeConfig:(id)a1 streamType:(unsigned long long)a2 eventDataClass:(Class)a3 useCase:(id)a4;
- (BOOL)pruneEventsWithReason:(unsigned long long)a0 error:(id *)a1 predicateBlock:(id /* block */)a2;
- (void)pruneLocalAndRemoteEventsWithPredicateBlock:(id /* block */)a0;
- (void)pruneLocalAndRemoteEventsWithReason:(unsigned long long)a0 usingPredicateBlock:(id /* block */)a1;
- (void)pruneStreamByPruningPolicyMaxStreamSize;
- (void)pruneStreamBySize:(unsigned long long)a0;
- (void)pruneTombstonesByAge:(double)a0;
- (void)pruneWithReason:(unsigned long long)a0 usingPredicateBlock:(id /* block */)a1;
- (id)publisherWithStartTime:(id)a0 withEndTime:(id)a1 withMaxEvents:(id)a2 reversed:(BOOL)a3;
- (id)publishersForAccounts:(id)a0 deviceTypes:(unsigned int)a1 withUseCase:(id)a2 startTime:(id)a3 endTime:(id)a4 maxEvents:(id)a5 lastN:(id)a6 reversed:(BOOL)a7 includeLocal:(BOOL)a8 pipeline:(id /* block */)a9;
- (id)publishersForDevices:(id)a0 startTime:(id)a1 endTime:(id)a2 maxEvents:(id)a3 lastN:(id)a4 reversed:(BOOL)a5 includeLocal:(BOOL)a6 pipeline:(id /* block */)a7;
- (id)publishersForDevices:(id)a0 startTime:(double)a1 includeLocal:(BOOL)a2 pipeline:(id /* block */)a3;
- (id)publishersForRemoteDevices:(id)a0 startTime:(id)a1 endTime:(id)a2 maxEvents:(id)a3 lastN:(id)a4 reversed:(BOOL)a5 includeLocal:(BOOL)a6 pipeline:(id /* block */)a7;
- (id)remoteDevicesWithError:(id *)a0;
- (id)sharedSyncAccountsForDomain:(unsigned long long)a0 error:(id *)a1;

@end
