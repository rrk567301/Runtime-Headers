@class NSData;

@interface PHAssetTextUnderstandingProperties : PHAssetPropertySet

@property (readonly, nonatomic) long long textUnderstandingVersion;
@property (readonly, nonatomic) NSData *textUnderstandingData;

+ (id)entityName;
+ (id)propertiesToFetch;
+ (id)keyPathFromPrimaryObject;
+ (id)propertySetName;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;
- (void).cxx_destruct;

@end
