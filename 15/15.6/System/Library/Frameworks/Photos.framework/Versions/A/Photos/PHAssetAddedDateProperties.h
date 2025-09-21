@class NSDate;

@interface PHAssetAddedDateProperties : PHBatchFetchedAssetPropertySet

@property (readonly, nonatomic) NSDate *addedDate;

+ (id)propertiesToFetch;
+ (long long)batchSize;
+ (long long)cacheSize;
+ (id)propertiesToSortBy;
+ (char)useNoIndexSelf;
+ (char)useObjectFetchingContext;

@end
