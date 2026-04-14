@class NSDate;

@interface PHAssetCreationDateProperties : PHBatchFetchedAssetPropertySet

@property (readonly, nonatomic) NSDate *creationDate;

+ (long long)batchSize;
+ (id)propertiesToFetch;
+ (long long)cacheSize;
+ (BOOL)useObjectFetchingContext;
+ (id)propertiesToSortBy;
+ (BOOL)useNoIndexSelf;

@end
