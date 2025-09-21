@class NSData, NSDate;

@interface PHAssetVisualSearchProperties : PHAssetPropertySet

@property (readonly, nonatomic) NSData *visualSearchData;
@property (readonly, nonatomic) float stickerConfidenceScore;
@property (readonly, nonatomic) long long stickerAlgorithmVersion;
@property (readonly, nonatomic) long long algorithmVersion;
@property (readonly, nonatomic) NSDate *adjustmentVersion;

+ (id)entityName;
+ (id)propertiesToFetch;
+ (id)propertySetName;
+ (id)keyPathFromPrimaryObject;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(char)a2;

@end
