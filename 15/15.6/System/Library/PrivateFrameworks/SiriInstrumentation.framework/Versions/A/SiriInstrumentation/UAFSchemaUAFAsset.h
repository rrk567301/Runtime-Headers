@class NSString, NSData;

@interface UAFSchemaUAFAsset : SISchemaInstrumentationMessage {
    struct { unsigned char assetLocale : 1; unsigned char assetSource : 1; unsigned char assetSizeOnDisk : 1; unsigned char isAssetPathValid : 1; unsigned char assetDownloadSizeInBytes : 1; unsigned char assetUnarchivedSizeInBytes : 1; } _has;
}

@property (copy, nonatomic) NSString *assetName;
@property (nonatomic) char hasAssetName;
@property (copy, nonatomic) NSString *assetSpecifier;
@property (nonatomic) char hasAssetSpecifier;
@property (copy, nonatomic) NSString *assetVersion;
@property (nonatomic) char hasAssetVersion;
@property (nonatomic) int assetLocale;
@property (nonatomic) char hasAssetLocale;
@property (nonatomic) int assetSource;
@property (nonatomic) char hasAssetSource;
@property (nonatomic) unsigned int assetSizeOnDisk;
@property (nonatomic) char hasAssetSizeOnDisk;
@property (nonatomic) char isAssetPathValid;
@property (nonatomic) char hasIsAssetPathValid;
@property (copy, nonatomic) NSString *assetPath;
@property (nonatomic) char hasAssetPath;
@property (nonatomic) unsigned long long assetDownloadSizeInBytes;
@property (nonatomic) char hasAssetDownloadSizeInBytes;
@property (nonatomic) unsigned long long assetUnarchivedSizeInBytes;
@property (nonatomic) char hasAssetUnarchivedSizeInBytes;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAssetPath;
- (void)deleteAssetName;
- (void)deleteAssetDownloadSizeInBytes;
- (void)deleteAssetLocale;
- (void)deleteAssetSizeOnDisk;
- (void)deleteAssetSource;
- (void)deleteAssetSpecifier;
- (void)deleteAssetUnarchivedSizeInBytes;
- (void)deleteAssetVersion;
- (void)deleteIsAssetPathValid;
- (id)suppressMessageUnderConditions;

@end
