@class NSDate;

@interface PHAssetCreationDateProperties : PHBatchFetchedAssetPropertySet

@property (readonly, nonatomic) NSDate *creationDate;

+ (long long)cacheSize;
+ (id)propertiesToFetch;
+ (BOOL)useNoIndexSelf;
+ (BOOL)useObjectFetchingContext;
+ (long long)batchSize;
+ (id)propertiesToSortBy;

@end
