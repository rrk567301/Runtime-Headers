@class NSNumber;

@interface PHAssetLocalDateProperties : PHAssetPropertySet

@property (readonly, nonatomic) NSNumber *inferredTimeZoneOffset;
@property (readonly, nonatomic) long long creationDateSource;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(char)a2;

@end
