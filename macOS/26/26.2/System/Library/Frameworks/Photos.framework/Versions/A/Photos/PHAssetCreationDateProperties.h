@class NSDate;

@interface PHAssetCreationDateProperties : PHBatchFetchedAssetPropertySet

@property (readonly, nonatomic) NSDate *creationDate;

+ (id)propertiesToFetch;
+ (long long)cacheSize;
+ (long long)batchSize;
+ (BOOL)useNoIndexSelf;
+ (id)propertiesToSortBy;
+ (BOOL)useObjectFetchingContext;

@end
