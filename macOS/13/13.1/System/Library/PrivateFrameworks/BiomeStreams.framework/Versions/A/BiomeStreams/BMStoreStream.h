@class BMStoreSource, NSString, BMStoreValidator, BMStreamsAccessClient, BMFileManager, BMStoreConfig, BMStorePublisherManager;

@interface BMStoreStream : NSObject <BMSourceStream, BMTimeBasedPublisherStream, BMSyncableStream> {
    BMStorePublisherManager *_publisherManager;
    NSString *_streamIdentifier;
    BMStoreConfig *_storeConfig;
    BMStoreSource *_source;
    BMStoreValidator *_validator;
    unsigned long long _streamType;
    BMStreamsAccessClient *_accessClient;
    BMFileManager *_fileManager;
}

@property (readonly, nonatomic) NSString *identifier;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)source;
- (BOOL)pruneEventsWithError:(id *)a0 predicateBlock:(id /* block */)a1;
- (id)publisherFromStartTime:(double)a0;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 lastN:(id)a3 reversed:(BOOL)a4;
- (id)publisherWithStartTime:(id)a0 endTime:(id)a1 maxEvents:(id)a2 reversed:(BOOL)a3;
- (id)publisher;
- (id)validator;
- (id)remoteDevices;
- (id)initWithPrivateStreamIdentifier:(id)a0 storeConfig:(id)a1;
- (id)initWithPublicStream:(long long)a0;
- (void)pruneExpiredEventsWithBlock:(id /* block */)a0;
- (void)pruneWithPredicateBlock:(id /* block */)a0;
- (id)publishersForRemoteDevices:(id)a0 startTime:(double)a1 includeLocal:(BOOL)a2 pipeline:(id /* block */)a3;
- (id)publishersForRemoteDevices:(id)a0 startTime:(id)a1 endTime:(id)a2 maxEvents:(id)a3 lastN:(id)a4 reversed:(BOOL)a5 includeLocal:(BOOL)a6 pipeline:(id /* block */)a7;
- (id)publisherWithStartTime:(id)a0 withEndTime:(id)a1 withMaxEvents:(id)a2 reversed:(BOOL)a3;
- (void)pruneLocalAndRemoteEventsWithPredicateBlock:(id /* block */)a0;
- (void)pruneLocalAndRemoteEventsWithReason:(unsigned long long)a0 usingPredicateBlock:(id /* block */)a1;
- (id)initWithStreamIdentifier:(id)a0 storeConfig:(id)a1;
- (id)initWithPublicStream:(long long)a0 storeConfig:(id)a1;
- (id)initWithPublicStream:(long long)a0 protectionClass:(unsigned long long)a1;
- (id)initWithRestrictedStreamIdentifier:(id)a0;
- (id)initWithRestrictedStreamIdentifier:(id)a0 protectionClass:(unsigned long long)a1;
- (id)initWithRestrictedStreamIdentifier:(id)a0 storeConfig:(id)a1;
- (BOOL)_requestReadAccess;
- (BOOL)_requestReadWriteAccess;
- (id)initWithStreamIdentifier:(id)a0 storeConfig:(id)a1 streamType:(unsigned long long)a2;
- (void)pruneTombstonesByAge:(double)a0;
- (void)pruneWithReason:(unsigned long long)a0 usingPredicateBlock:(id /* block */)a1;
- (BOOL)pruneEventsWithReason:(unsigned long long)a0 error:(id *)a1 predicateBlock:(id /* block */)a2;
- (void)_pruneWithStoreConfig:(id)a0 expirationAge:(double)a1 block:(id /* block */)a2;

@end
