@class NSDate;

@interface PHAssetAddedDateProperties : PHBatchFetchedAssetPropertySet

@property (readonly, nonatomic) NSDate *addedDate;

+ (id)propertiesToFetch;
+ (long long)cacheSize;
+ (long long)batchSize;
+ (BOOL)useObjectFetchingContext;
+ (id)propertiesToSortBy;
+ (BOOL)useNoIndexSelf;

@end
