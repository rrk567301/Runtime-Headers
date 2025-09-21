@class NSString;

@interface PHAssetResourceUploadJobConfiguration : PHObject

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) unsigned short state;

+ (id)transformValueExpression:(id)a0 forKeyPath:(id)a1;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (id)entityKeyMap;
+ (id)fetchType;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)fetchAssetResourceUploadJobConfigurationWithLocalIdentifiers:(id)a0 options:(id)a1;
+ (id)fetchAssetResourceUploadJobConfigurationsWithOptions:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (Class)changeRequestClass;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;

@end
