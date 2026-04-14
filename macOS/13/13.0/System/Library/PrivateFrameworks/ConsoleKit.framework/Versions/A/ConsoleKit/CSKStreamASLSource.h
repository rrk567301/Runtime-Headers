@class NSObject, NSURL, CSKFileObserver;
@protocol OS_dispatch_queue;

@interface CSKStreamASLSource : CSKStreamSource

@property (nonatomic) struct __asl_object_s { } *store;
@property (retain, nonatomic) CSKFileObserver *fileObserver;
@property (nonatomic) long long sourceType;
@property (nonatomic) BOOL isFileObserverEnabled;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateUpdatesSerialQueue;
@property (nonatomic) BOOL isFetchingEntitiesBackward;
@property (readonly, nonatomic) NSURL *fileURL;
@property (nonatomic) struct __asl_object_s { } *queryList;

+ (id)diagnosticAndUsageDataASLSource;

- (void)dealloc;
- (id)init;
- (void)resume;
- (void).cxx_destruct;
- (void)stop;
- (id)initWithFileURL:(id)a0;
- (void)fail;
- (void)fetchBackward;
- (void)fetchForward;
- (void)_cleanupASLStoreAndFileObserver;
- (id)_storeDataURLFromFileURL:(id)a0;
- (id /* block */)_fileObserverEventHandler;
- (id)_readStoreChunkPreviousToEntity:(id)a0;
- (id)_readStoreChunkNextToEntity:(id)a0;
- (id)_handleMessagesFromList:(struct __asl_object_s { } *)a0 direction:(int)a1;

@end
