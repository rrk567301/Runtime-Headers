@class NSDate;

@interface PHAssetAddedDateProperties : PHBatchFetchedAssetPropertySet

@property (readonly, nonatomic) NSDate *addedDate;

+ (long long)cacheSize;
+ (id)propertiesToFetch;
+ (BOOL)useNoIndexSelf;
+ (BOOL)useObjectFetchingContext;
+ (long long)batchSize;
+ (id)propertiesToSortBy;

@end
