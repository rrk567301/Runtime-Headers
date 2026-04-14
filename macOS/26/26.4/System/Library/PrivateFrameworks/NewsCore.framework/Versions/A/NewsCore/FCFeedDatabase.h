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
- (void)teardown;
- (void)enumerateRangesMissingFromLookups:(id)a0 visitor:(id /* block */)a1;
- (void)lookupFeedItemsForFeedID:(id)a0 feedRange:(id)a1 completion:(id /* block */)a2;
- (id)performDatabaseLookups:(id)a0 boundedByCount:(unsigned long long)a1;
- (id)performDatabaseLookups:(id)a0;
- (void)saveFeedItems:(id)a0 feedID:(id)a1 feedRange:(id)a2;
- (void)saveFeedItems:(id)a0 forFeedID:(id)a1 insertionToken:(id)a2 requestDate:(id)a3 reachedToOrder:(BOOL)a4 extent:(unsigned long long)a5 reachedEnd:(BOOL)a6;
- (id)t_lookupFeedID:(id)a0 range:(id)a1 maxCount:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)initWithParentDirectoryURL:(id)a0 usage:(long long)a1 endpoint:(long long)a2;
- (void)t_insertSegmentForFeedID:(id)a0 range:(id)a1 items:(id)a2;
- (void)saveWithCompletionHandler:(id /* block */)a0;
- (void)saveFeedItems:(id)a0 feedIDs:(id)a1 extentByFeedID:(id)a2 requestRangeByFeedID:(id)a3;

@end
