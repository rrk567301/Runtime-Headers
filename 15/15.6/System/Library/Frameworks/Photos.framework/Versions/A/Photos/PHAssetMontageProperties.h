@class NSString;

@interface PHAssetMontageProperties : PHAssetPropertySet

@property (readonly, copy, nonatomic) NSString *montage;

+ (id)propertiesToFetch;
+ (id)propertySetName;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(char)a2;

@end
