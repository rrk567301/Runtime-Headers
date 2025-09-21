@class NSError, NSArray;

@interface MPServerObjectDatabaseImportResult : NSObject

@property (readonly, nonatomic) id annotatedPayload;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSArray *playableAssetIdentifiers;
@property (readonly, nonatomic) NSArray *importedIdentifiers;
@property (readonly, nonatomic) long long importedObjectsCount;
@property (readonly, nonatomic) long long importedAssetsCount;
@property (readonly, nonatomic) long long importedHLSAssetsCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithAnnotatedPayload:(id *)a0 playableAssetIdentifiers:(id)a1 importedIdentifiers:(id)a2 assetsCount:(long long)a3 hlsAssetsCount:(long long)a4 error:(id)a5;

@end
