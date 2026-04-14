@class NSDate;

@interface PHAssetCreationDateProperties : PHBatchFetchedAssetPropertySet

@property (readonly, nonatomic) NSDate *creationDate;

+ (long long)batchSize;
+ (long long)cacheSize;
+ (id)propertiesToFetch;
+ (BOOL)useNoIndexSelf;
+ (BOOL)useObjectFetchingContext;
+ (id)propertiesToSortBy;

@end
