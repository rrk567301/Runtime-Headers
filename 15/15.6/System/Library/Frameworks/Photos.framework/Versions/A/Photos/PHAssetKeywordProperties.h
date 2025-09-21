@class NSSet;

@interface PHAssetKeywordProperties : PHAssetPropertySet

@property (readonly, copy, nonatomic) NSSet *keywordTitles;

+ (id)entityName;
+ (id)propertiesToFetch;
+ (char)isToMany;
+ (id)propertySetName;
+ (char)createsPropertySetObjectWithCustomImplementation;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(char)a2;

@end
