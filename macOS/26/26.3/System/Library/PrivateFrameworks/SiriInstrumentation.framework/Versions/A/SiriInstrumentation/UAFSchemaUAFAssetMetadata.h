@class NSString, NSData;

@interface UAFSchemaUAFAssetMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char assetSizeInBytes : 1; } _has;
}

@property (copy, nonatomic) NSString *assetName;
@property (nonatomic) BOOL hasAssetName;
@property (nonatomic) unsigned long long assetSizeInBytes;
@property (nonatomic) BOOL hasAssetSizeInBytes;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteAssetName;
- (void)deleteAssetSizeInBytes;

@end
