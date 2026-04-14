@class NSString, FCFeedRange, FCFeedItemFeature;

@interface FCFeedDatabaseLookup : NSObject

@property (copy, nonatomic) NSString *feedID;
@property (copy, nonatomic) FCFeedRange *feedRange;
@property (nonatomic) unsigned long long maxCount;
@property (readonly, nonatomic) BOOL hasMaxCount;
@property (nonatomic) BOOL cachedOnly;
@property (copy, nonatomic) FCFeedItemFeature *requiredFeature;

- (id)description;
- (void).cxx_destruct;

@end
