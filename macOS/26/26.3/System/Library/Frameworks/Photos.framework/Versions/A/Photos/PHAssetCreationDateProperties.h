@class NSDate;

@interface PHAssetCreationDateProperties : PHBatchFetchedAssetPropertySet

@property (readonly, nonatomic) NSDate *creationDate;

+ (id)propertiesToFetch;
+ (long long)cacheSize;
+ (long long)batchSize;
+ (BOOL)useObjectFetchingContext;
+ (id)propertiesToSortBy;
+ (BOOL)useNoIndexSelf;

@end
