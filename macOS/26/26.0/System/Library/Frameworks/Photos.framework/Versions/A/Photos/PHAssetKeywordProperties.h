@class NSSet;

@interface PHAssetKeywordProperties : PHAssetPropertySet

@property (readonly, copy, nonatomic) NSSet *keywordTitles;

+ (BOOL)isToMany;
+ (id)propertiesToFetch;
+ (id)propertySetName;
+ (id)entityName;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;
+ (BOOL)createsPropertySetObjectWithCustomImplementation;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;
- (void).cxx_destruct;

@end
