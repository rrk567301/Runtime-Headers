@class NSURL, FCFDBStorage, NSObject;
@protocol OS_dispatch_queue;

@interface FCFeedDatabase : NSObject <FCFeedDatabaseProtocol> {
    long long _usage;
    NSObject<OS_dispatch_queue> *_initQueue;
    FCFDBStorage *_storage;
}

@property (readonly, nonatomic) long long usage;
@property (readonly, nonatomic) long long endpoint;
@property (readonly, nonatomic) unsigned short version;
@property (readonly, copy, nonatomic) NSURL *parentDirectoryURL;

+ (id)temporaryFeedDatabaseWithEndpoint:(long long)a0;

- (void)prewarm;
- (void)saveWithCompletionHandler:(id /* block */)a0;
- (void)lookupFeedItemsForFeedID:(id)a0 feedRange:(id)a1 completion:(id /* block */)a2;
- (id)initWithParentDirectoryURL:(id)a0 usage:(long long)a1 endpoint:(long long)a2;
- (void)teardown;
- (void)saveFeedItems:(id)a0 feedID:(id)a1 feedRange:(id)a2;
- (id)t_lookupFeedID:(id)a0 range:(id)a1 maxCount:(unsigned long long)a2;
- (void)t_insertSegmentForFeedID:(id)a0 range:(id)a1 items:(id)a2;
- (void).cxx_destruct;

@end
