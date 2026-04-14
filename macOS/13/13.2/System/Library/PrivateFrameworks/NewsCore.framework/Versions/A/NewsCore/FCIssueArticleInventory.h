@class FCOnce, FCCloudContext, NSString, NTPBFeedItemInventory, FCAsyncSerialQueue;

@interface FCIssueArticleInventory : NSObject <FCIssueArticleInventoryType>

@property (readonly, nonatomic) FCCloudContext *context;
@property (readonly, nonatomic) NSString *cacheDataPath;
@property (readonly, nonatomic) FCOnce *loadFromCacheOnce;
@property (retain) NTPBFeedItemInventory *latestInventory;
@property (readonly, nonatomic) FCAsyncSerialQueue *feedItemsRefreshSerialQueue;

- (id)init;
- (void).cxx_destruct;
- (void)_refreshIfNeeded;
- (id)_promiseConfiguration;
- (id)cachedFeedItemsFromCurrentIssues;
- (id)initWithContext:(id)a0 cacheDirectory:(id)a1;
- (BOOL)_isRefreshNeeded;
- (id)_loadInventoryFromCache;
- (id)_promiseIssuesWithConfiguration:(id)a0;
- (id)_promiseFeedItemsWithIssues:(id)a0 configuration:(id)a1;

@end
