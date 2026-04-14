@class FCOnce, FCCloudContext, NSString, FCAsyncSerialQueue, NSArray, FCPBFeedItemInventory;
@protocol FCFeedItemServiceType;

@interface FCFeedItemInventory : NSObject <FCFeedItemInventoryType>

@property (readonly, nonatomic) FCCloudContext *context;
@property (readonly, nonatomic) id<FCFeedItemServiceType> feedItemService;
@property (readonly, nonatomic) NSString *filePath;
@property (readonly, nonatomic) unsigned int version;
@property (readonly, nonatomic) double refreshInterval;
@property (readonly, nonatomic) NSString *loggingKey;
@property (readonly, nonatomic) FCOnce *loadFromCacheOnce;
@property (retain) FCPBFeedItemInventory *latestInventory;
@property (readonly, nonatomic) FCAsyncSerialQueue *feedItemsRefreshSerialQueue;
@property (readonly, nonatomic) NSArray *allFeedItems;

- (id)init;
- (void).cxx_destruct;
- (id)_refreshIfNeeded;
- (void)_adoptInventory:(id)a0;
- (BOOL)_isRefreshNeeded;
- (id)_loadInventoryFromCache;
- (void)_populateScoreProfilesForFeedItems:(id)a0;
- (void)_populateScoreProfilesForFeedItems:(id)a0 configurationSet:(long long)a1;
- (void)_prepareForUse;
- (id)_refreshIfNeededWithQoS:(long long)a0;
- (void)_rescoreInventoryIfNeeded:(id)a0 forScoringVersion:(unsigned long long)a1;
- (id)allFeedItemScoreProfilesForConfigurationSet:(long long)a0 scoringVersion:(unsigned long long)a1;
- (id)allFeedItemsWithTopic:(id)a0;
- (id)initWithContext:(id)a0 feedItemService:(id)a1 filePath:(id)a2 version:(unsigned int)a3 refreshInterval:(double)a4 loggingKey:(id)a5;
- (void)refreshIfNeededWithCompletion:(id /* block */)a0;

@end
