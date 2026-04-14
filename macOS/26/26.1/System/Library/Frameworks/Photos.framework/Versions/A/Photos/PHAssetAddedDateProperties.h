@class NSDate;

@interface PHAssetAddedDateProperties : PHBatchFetchedAssetPropertySet

@property (readonly, nonatomic) NSDate *addedDate;

+ (long long)batchSize;
+ (long long)cacheSize;
+ (id)propertiesToFetch;
+ (BOOL)useNoIndexSelf;
+ (BOOL)useObjectFetchingContext;
+ (id)propertiesToSortBy;

@end
