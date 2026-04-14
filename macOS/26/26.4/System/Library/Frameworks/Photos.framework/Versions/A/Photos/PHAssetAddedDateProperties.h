@class NSDate;

@interface PHAssetAddedDateProperties : PHBatchFetchedAssetPropertySet

@property (readonly, nonatomic) NSDate *addedDate;

+ (long long)batchSize;
+ (id)propertiesToFetch;
+ (long long)cacheSize;
+ (BOOL)useObjectFetchingContext;
+ (id)propertiesToSortBy;
+ (BOOL)useNoIndexSelf;

@end
