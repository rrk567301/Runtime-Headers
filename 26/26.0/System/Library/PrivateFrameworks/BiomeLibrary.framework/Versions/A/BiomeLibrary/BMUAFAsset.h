@class NSString, BMUAFISOLocale;

@interface BMUAFAsset : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *assetName;
@property (readonly, nonatomic) NSString *assetSpecifier;
@property (readonly, nonatomic) NSString *assetVersion;
@property (readonly, nonatomic) BMUAFISOLocale *assetLocale;
@property (readonly, nonatomic) int assetSource;
@property (readonly, nonatomic) BOOL isAssetPathValid;
@property (nonatomic) BOOL hasIsAssetPathValid;
@property (readonly, nonatomic) NSString *assetPath;
@property (readonly, nonatomic) unsigned long long assetDownloadSizeInBytes;
@property (nonatomic) BOOL hasAssetDownloadSizeInBytes;
@property (readonly, nonatomic) unsigned long long assetUnarchivedSizeInBytes;
@property (nonatomic) BOOL hasAssetUnarchivedSizeInBytes;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)protoFields;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)validKeyPaths;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)serialize;
- (id)initByReadFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAssetName:(id)a0 assetSpecifier:(id)a1 assetVersion:(id)a2 assetLocale:(id)a3 assetSource:(int)a4 isAssetPathValid:(id)a5 assetPath:(id)a6 assetDownloadSizeInBytes:(id)a7 assetUnarchivedSizeInBytes:(id)a8;

@end
