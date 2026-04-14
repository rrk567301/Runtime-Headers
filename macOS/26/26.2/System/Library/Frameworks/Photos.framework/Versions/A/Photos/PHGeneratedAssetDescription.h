@class NSString;

@interface PHGeneratedAssetDescription : PHObject

@property (copy, nonatomic) NSString *descriptionText;
@property (nonatomic) short analysisVersion;
@property (nonatomic) long long analysisSourceType;

+ (id)fetchType;
+ (id)identifierCode;
+ (id)entityKeyMap;
+ (id)managedEntityName;
+ (id)fetchGeneratedAssetDescriptionsGroupedByAssetLocalIdentifierWithType:(long long)a0 forAssets:(id)a1;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)description;
- (id)initWithNodeContainer:(id)a0 photoLibrary:(id)a1;

@end
